#!/usr/bin/env python3
"""Refresh root README.md Progress / Total from ✓ counts in each topic README."""
from pathlib import Path

from dsa_readme_rows import update_root_readme_progress

ROOT = Path(__file__).resolve().parent.parent

if __name__ == "__main__":
    if update_root_readme_progress(ROOT):
        print("Updated README.md progress overview.")
    else:
        print("README.md already matched topic READMEs (no changes).")
