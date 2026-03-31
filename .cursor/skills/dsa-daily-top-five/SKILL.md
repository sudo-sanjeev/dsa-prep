---
name: dsa-daily-top-five
description: >-
  Picks five high-priority DSA problems per day from the dsa-prep repo by combining
  the user’s tracking tables (unsolved, in-progress, overdue reviews) with live web
  research on interview frequency and classic lists. Use when the user asks for daily
  DSA picks, top 5 problems today, priority queue for Striver sheet, or to run the
  dsa-daily-top-five workflow in the dsa-prep workspace.
---

# DSA daily top 5

## Goal

Return **exactly five** problems the user should solve **today**, grounded in **this repo’s** `NN-*/README.md` tables and **brief web research** on what tends to matter in interviews.

## Steps

1. **Repo root** — Use the workspace folder that contains `01-binary-search/README.md` and `scripts/list_dsa_candidates.py` (the `dsa-prep` repo).

2. **Candidate pool** — Run:

   ```bash
   python3 scripts/list_dsa_candidates.py
   ```

   Optional if the user only wants reviews due today:

   ```bash
   python3 scripts/list_dsa_candidates.py --due-only
   ```

   Treat script output as the **allowed set**: every final pick must be a row that exists in those tables (same problem + topic), unless the pool is empty (then say so and suggest filling `04-stack-and-queues` or marking progress).

3. **Prioritize within the pool** (in order):

   - Rows marked **DUE** (next revision date ≤ today, when filled in).
   - Status `○` over `-` (continue over cold start).
   - **Breadth** — prefer covering **at least three different topic folders** in the five picks when the pool allows it.
   - **Difficulty mix** — aim for roughly **2 easy/medium** and **1–2 medium/hard** unless the user specifies otherwise.

4. **Web research** — Run **2–4** targeted searches (current year + prior year is enough), e.g. “LeetCode most frequent interview problems”, “Blind 75 / Grind 75”, “FAANG DSA topics frequency”, or company-specific if the user said one. Use results to **break ties** and **rank** among candidates that are already in the pool. Do **not** recommend problems that are **not** listed in the repo’s topic READMEs (unless the user explicitly asks to add off-list problems).

5. **Deliver the answer** using the template below. Keep rationale to **one short sentence per problem**.

## Output template

```markdown
## Your top 5 for [weekday, YYYY-MM-DD]

| # | Topic | Problem | Difficulty | Link | Why today |
|---|-------|---------|------------|------|-----------|
| 1 | … | … | … | … | … |
…
**Suggested order:** 1 → … → 5 (short reason)

**If you finish early:** [one optional stretch from same pool or next DUE row]
```

## Rules

- **Five picks, no more, no less** (unless the pool has fewer than five non-✓ rows — then list all available and say how many are missing).
- Every pick must **map to one table row** in `NN-*/README.md` (topic + problem line).
- Cite **what you searched** in one line at the bottom (no need for full URLs unless useful).
- If `--due-only` returns nothing, still run without it and explain that reviews are not scheduled yet.
