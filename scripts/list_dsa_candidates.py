#!/usr/bin/env python3
"""List unsolved / in-progress rows from topic README tables (dsa-prep tracking format)."""
from __future__ import annotations

import argparse
import json
import re
import sys
from datetime import date
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
TOPIC_GLOB = "[0-9][0-9]-*/README.md"
DATE_RE = re.compile(r"\b(\d{4}-\d{2}-\d{2})\b")
LC_LINK_RE = re.compile(r"\[([^\]]+)\]\((https://leetcode\.com/[^)]+)\)")


def parse_table_row(line: str) -> dict | None:
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
    if status in ("✓", "√"):
        return None
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


def iter_candidates() -> list[tuple[str, dict]]:
    out: list[tuple[str, dict]] = []
    for path in sorted(ROOT.glob(TOPIC_GLOB)):
        topic = path.parent.name
        text = path.read_text(encoding="utf-8")
        for line in text.splitlines():
            row = parse_table_row(line)
            if row:
                out.append((topic, row))
    return out


def main() -> None:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--format", choices=("md", "json"), default="md")
    p.add_argument("--due-only", action="store_true", help="Only rows with next revision date <= today")
    args = p.parse_args()
    rows = iter_candidates()
    if args.due_only:
        rows = [(t, r) for t, r in rows if r["review_due"]]
    if args.format == "json":
        json.dump(
            [{"topic": t, **r} for t, r in rows],
            sys.stdout,
            indent=2,
            ensure_ascii=False,
        )
        sys.stdout.write("\n")
        return
    print(f"Candidates: **{len(rows)}** rows (not ✓). Repo: `{ROOT}`\n")
    for topic, r in rows:
        flag = " **DUE**" if r["review_due"] else ""
        link = f"[{r['leetcode_title']}]({r['leetcode_url']})" if r["leetcode_url"] else r["leetcode_cell"][:80]
        print(f"- **{topic}** | {r['difficulty']} | {r['problem'][:60]}{'…' if len(r['problem']) > 60 else ''} | {link} | `{r['status']}`{flag}")
    print()


if __name__ == "__main__":
    main()
