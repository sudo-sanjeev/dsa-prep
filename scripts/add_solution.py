#!/usr/bin/env python3
"""Save a C++ solution into the topic folder and mark the README row(s) solved.

  python3 scripts/add_solution.py 200              # uses scripts/solution.cpp, overwrites, updates README
  python3 scripts/add_solution.py 3 -f -           # paste stdin (Ctrl-D)
  python3 scripts/add_solution.py --topic-and-slug 10-graphs foo -f a.cpp

Flags: --no-readme  --no-overwrite  --raw (no auto #includes)  --slug / --topic for disambiguation.
"""
from __future__ import annotations

import argparse
import re
import sys
from pathlib import Path

from dsa_readme_rows import (
    iter_readme_rows,
    leetcode_num_from_title,
    leetcode_slug_from_url,
    update_readme_mark_solved,
)

ROOT = Path(__file__).resolve().parent.parent
DEFAULT_FILE = ROOT / "scripts" / "solution.cpp"


def read_body(path: str) -> tuple[str, str]:
    if path == "-":
        return sys.stdin.read(), "(stdin)"
    p = Path(path)
    if not p.is_file():
        alt = ROOT / path
        if alt.is_file():
            p = alt
        else:
            raise SystemExit(f"File not found: {path!r} (tried {alt})")
    return p.read_text(encoding="utf-8"), str(p.resolve())


def wrap_cpp_includes(body: str) -> str:
    lines: list[str] = []
    if re.search(r"\bvector\s*<", body):
        lines.append("#include <vector>")
    if re.search(r"\bstd::string\b|\bstring\s+\w", body) or re.search(
        r"\bstring\s*[&*]|\(\s*string\s", body
    ):
        lines.append("#include <string>")
    if "unordered_map" in body:
        lines.append("#include <unordered_map>")
    if "unordered_set" in body:
        lines.append("#include <unordered_set>")
    if re.search(r"\bmap\s*<", body) and "unordered_map" not in body:
        lines.append("#include <map>")
    if re.search(r"\bset\s*<", body) and "unordered_set" not in body:
        lines.append("#include <set>")
    if re.search(r"\b(max|min|sort|reverse|swap|clamp)\s*\(", body):
        lines.append("#include <algorithm>")
    if "queue" in body or "priority_queue" in body:
        lines.append("#include <queue>")
    if re.search(r"\bstack\s*<", body):
        lines.append("#include <stack>")
    if re.search(r"\bdeque\s*<", body):
        lines.append("#include <deque>")
    if "accumulate" in body or "numeric" in body:
        lines.append("#include <numeric>")
    if "INT_MAX" in body or "INT_MIN" in body:
        lines.append("#include <climits>")
    if "memset" in body:
        lines.append("#include <cstring>")
    dedup: list[str] = []
    seen: set[str] = set()
    for x in lines:
        if x not in seen:
            seen.add(x)
            dedup.append(x)
    if not dedup:
        return body.rstrip() + "\n"
    return "\n".join(dedup) + "\n\nusing namespace std;\n\n" + body.rstrip() + "\n"


def find_rows(
    *,
    leetcode: int | None,
    slug: str | None,
    topic: str | None,
) -> list[tuple[str, dict]]:
    rows = iter_readme_rows(ROOT, exclude_solved=False)
    matches: list[tuple[str, dict]] = []
    slug_n = slug.strip().lower() if slug else None
    for t, r in rows:
        if topic and t != topic:
            continue
        url = r.get("leetcode_url") or ""
        if not url:
            continue
        s = leetcode_slug_from_url(url)
        if not s:
            continue
        if leetcode is not None and leetcode_num_from_title(r["leetcode_title"]) != leetcode:
            continue
        if slug_n is not None and s.lower() != slug_n:
            continue
        matches.append((t, r))
    return matches


def pick_target(matches: list[tuple[str, dict]]) -> tuple[Path, int | None]:
    if not matches:
        raise SystemExit(
            "No README row with that LeetCode link. "
            "Try --slug / --topic, or --topic-and-slug TOPIC file-slug."
        )
    by_slug: dict[tuple[str, str], tuple[str, dict]] = {}
    for t, r in matches:
        slug = leetcode_slug_from_url(r["leetcode_url"])
        assert slug
        by_slug[(t, slug.lower())] = (t, r)
    if len(by_slug) > 1:
        vals = list(by_slug.values())
        slugs = {leetcode_slug_from_url(r["leetcode_url"]).lower() for t, r in vals}
        nums = {leetcode_num_from_title(r["leetcode_title"]) for t, r in vals}
        # Same problem listed under multiple topic folders (e.g. 206 in linked-list + recursion).
        if len(slugs) == 1 and len(nums) == 1 and None not in nums:
            t, r = min(vals, key=lambda tr: tr[0])
        else:
            msg = "\n".join(
                f"  {t}  {leetcode_slug_from_url(r['leetcode_url'])}  {r['problem'][:50]}"
                for t, r in sorted(vals, key=lambda x: (x[0], x[1]["problem"]))
            )
            raise SystemExit("Ambiguous match; use --slug or --topic:\n" + msg)
    else:
        t, r = next(iter(by_slug.values()))
    slug = leetcode_slug_from_url(r["leetcode_url"])
    assert slug
    lc = leetcode_num_from_title(r["leetcode_title"])
    return ROOT / t / f"{slug}.cpp", lc


def explicit_cpp(topic: str, slug: str) -> Path:
    d = ROOT / topic
    if not d.is_dir():
        raise SystemExit(f"Unknown topic folder: {topic}")
    s = slug.strip().replace(" ", "-").lower()
    if not re.fullmatch(r"[a-z0-9][a-z0-9-]*", s):
        raise SystemExit(f"Bad --topic-and-slug slug: {slug!r}")
    return d / f"{s}.cpp"


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("leetcode", nargs="?", type=int, help="LeetCode problem number (e.g. 200)")
    ap.add_argument("-f", "--file", default=str(DEFAULT_FILE), help=f"default: {DEFAULT_FILE.relative_to(ROOT)}")
    ap.add_argument("--slug", help="Disambiguate with URL slug (e.g. number-of-islands)")
    ap.add_argument("--topic", help="Topic folder (e.g. 10-graphs)")
    ap.add_argument("--topic-and-slug", nargs=2, metavar=("TOPIC", "SLUG"), help="No README lookup")
    ap.add_argument("--raw", action="store_true", help="Do not add #includes / using")
    ap.add_argument("--no-readme", action="store_true", help="Do not mark README rows ✓")
    ap.add_argument("--no-overwrite", action="store_true", help="Refuse if .cpp already exists")
    args = ap.parse_args()

    body, src = read_body(args.file)
    if not body.strip():
        raise SystemExit(f"Empty body from {src}. Save {DEFAULT_FILE.name} or use -f -.")

    lc_num: int | None = None
    if args.topic_and_slug:
        out = explicit_cpp(args.topic_and_slug[0], args.topic_and_slug[1])
    else:
        if args.leetcode is None and not args.slug:
            raise SystemExit("Pass a LeetCode number, e.g.: python3 scripts/add_solution.py 200")
        matches = find_rows(leetcode=args.leetcode, slug=args.slug, topic=args.topic)
        out, lc_num = pick_target(matches)

    if out.exists() and args.no_overwrite:
        raise SystemExit(f"Exists: {out} (drop --no-overwrite to replace)")

    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_text(body if args.raw else wrap_cpp_includes(body), encoding="utf-8")
    print(out)

    if not args.no_readme and lc_num is not None:
        for p in update_readme_mark_solved(ROOT, lc_num):
            print(f"README: {p.relative_to(ROOT)}")


if __name__ == "__main__":
    main()
