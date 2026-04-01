"""Parse topic README tables (Striver-style tracking) in dsa-prep."""
from __future__ import annotations

import re
from datetime import date, timedelta
from pathlib import Path

TOPIC_GLOB = "[0-9][0-9]-*/README.md"
DATE_RE = re.compile(r"\b(\d{4}-\d{2}-\d{2})\b")
LC_LINK_RE = re.compile(r"\[([^\]]+)\]\((https://leetcode\.com/[^)]+)\)")
LC_SLUG_RE = re.compile(r"leetcode\.com/problems/([^/)?#]+)")


def parse_readme_table_row(line: str) -> dict | None:
    line = line.rstrip("\n")
    if not line.startswith("|"):
        return None
    parts = [p.strip() for p in line.split("|")]
    if len(parts) < 9:
        return None
    num = parts[1]
    if not num or not num[0].isdigit():
        return None
    status = parts[5]
    leet_cell = parts[4]
    m = LC_LINK_RE.search(leet_cell)
    leet_title = m.group(1) if m else ""
    leet_url = m.group(2) if m else ""
    next_rev = parts[7]
    due = False
    dm = DATE_RE.search(next_rev)
    if dm:
        try:
            d = date.fromisoformat(dm.group(1))
            if d <= date.today():
                due = True
        except ValueError:
            pass
    return {
        "num": num,
        "problem": parts[2],
        "difficulty": parts[3],
        "leetcode_cell": leet_cell,
        "leetcode_title": leet_title,
        "leetcode_url": leet_url,
        "status": status or "-",
        "last_revision": parts[6],
        "next_revision": next_rev,
        "review_due": due,
    }


def leetcode_slug_from_url(url: str) -> str | None:
    m = LC_SLUG_RE.search(url)
    return m.group(1) if m else None


def leetcode_num_from_title(title: str) -> int | None:
    m = re.match(r"^(\d+)\.\s*", title.strip())
    return int(m.group(1)) if m else None


def iter_readme_rows(
    root: Path,
    *,
    exclude_solved: bool = False,
) -> list[tuple[str, dict]]:
    out: list[tuple[str, dict]] = []
    for path in sorted(root.glob(TOPIC_GLOB)):
        topic = path.parent.name
        text = path.read_text(encoding="utf-8")
        for line in text.splitlines():
            row = parse_readme_table_row(line)
            if not row:
                continue
            if exclude_solved and row["status"] in ("✓", "√"):
                continue
            out.append((topic, row))
    return out


def revision_dates(difficulty: str) -> tuple[str, str]:
    """(last_revision, next_revision) ISO dates per repo README guidance."""
    today = date.today()
    d = difficulty.strip().lower()
    if d == "easy":
        delta = timedelta(days=14)
    elif d == "hard":
        delta = timedelta(days=6)
    else:
        delta = timedelta(days=7)
    nxt = today + delta
    return today.isoformat(), nxt.isoformat()


def count_solved_rows_in_readme(path: Path) -> int:
    """Count table rows with status ✓ or √ in a topic README."""
    n = 0
    for line in path.read_text(encoding="utf-8").splitlines():
        row = parse_readme_table_row(line)
        if row and row["status"] in ("✓", "√"):
            n += 1
    return n


def update_root_readme_progress(root: Path) -> bool:
    """Sync Progress / Total columns in root README.md from topic README ✓ counts."""
    readme_path = root / "README.md"
    if not readme_path.is_file():
        return False
    text = readme_path.read_text(encoding="utf-8")
    lines = text.splitlines(keepends=False)

    counts: dict[str, int] = {}
    for path in sorted(root.glob(TOPIC_GLOB)):
        counts[path.parent.name] = count_solved_rows_in_readme(path)
    total_solved = sum(counts.values())

    new_lines: list[str] = []
    changed = False
    for line in lines:
        parts = [p.strip() for p in line.split("|")]
        if (
            len(parts) >= 7
            and len(parts[1]) == 2
            and parts[1].isdigit()
            and "README.md" in parts[5]
        ):
            m = re.search(r"\./([^)]+)/README\.md", parts[5])
            if m:
                folder = m.group(1)
                solved = counts.get(folder, 0)
                if parts[3] != str(solved):
                    changed = True
                parts[3] = str(solved)
                new_lines.append("| " + " | ".join(parts[1:6]) + " |")
                continue
        if len(parts) >= 5 and "**Total**" in parts[2]:
            total_cell = parts[4] if len(parts) > 4 else "**338**"
            new_prog = f"**{total_solved}**"
            if parts[3] != new_prog:
                changed = True
            new_lines.append(
                f"|    | **Total**           | {new_prog}    | {total_cell} |                                               |"
            )
            continue
        new_lines.append(line)

    if changed:
        ending = "\n" if text.endswith("\n") else ""
        readme_path.write_text("\n".join(new_lines) + ending, encoding="utf-8")
    return changed


def update_readme_mark_solved(root: Path, leetcode: int) -> list[Path]:
    """Set Status ✓, last / next revision on every row whose primary LC link matches leetcode."""
    touched: list[Path] = []
    for path in sorted(root.glob(TOPIC_GLOB)):
        original = path.read_text(encoding="utf-8")
        lines = original.splitlines()
        out: list[str] = []
        changed = False
        for line in lines:
            row = parse_readme_table_row(line)
            if row and row.get("leetcode_url"):
                n = leetcode_num_from_title(row["leetcode_title"])
                if n == leetcode:
                    last, nxt = revision_dates(row["difficulty"])
                    parts = [p.strip() for p in line.split("|")]
                    if len(parts) < 9:
                        out.append(line)
                        continue
                    parts[5] = "✓"
                    parts[6] = last
                    parts[7] = nxt
                    out.append("| " + " | ".join(parts[1:8]) + " |")
                    changed = True
                    continue
            out.append(line)
        if changed:
            ending = "\n" if original.endswith("\n") else ""
            path.write_text("\n".join(out) + ending, encoding="utf-8")
            touched.append(path)
    return touched
