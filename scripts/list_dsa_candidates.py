#!/usr/bin/env python3
"""List unsolved / in-progress rows from topic README tables (dsa-prep tracking format)."""
from __future__ import annotations

import argparse
import json
import sys
from pathlib import Path

from dsa_readme_rows import iter_readme_rows

ROOT = Path(__file__).resolve().parent.parent


def main() -> None:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--format", choices=("md", "json"), default="md")
    p.add_argument("--due-only", action="store_true", help="Only rows with next revision date <= today")
    args = p.parse_args()
    rows = iter_readme_rows(ROOT, exclude_solved=True)
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
