# Dynamic Programming (Striver §16) (Patterns and Problems)

> **Tracking:** see [How to use](../README.md#how-to-use).

### 1D DP


| #   | Problem                              | Difficulty | LeetCode | Status | Last revision | Next revision |
| --- | ------------------------------------ | ---------- | -------------------------------------------------------------------------------------------------------------------- | --- | --- | --- |
| 1   | Climbing stairs                      | Medium     | [70. Climbing Stairs](https://leetcode.com/problems/climbing-stairs/) | - | | |
| 2   | Frog Jump                            | Medium     | [403. Frog Jump](https://leetcode.com/problems/frog-jump/) | - | | |
| 3   | Frog jump with K distances           | Medium     | [403. Frog Jump](https://leetcode.com/problems/frog-jump/) (related “k-step” variants are often GFG / Coding Ninjas) | - | | |
| 4   | Maximum sum of non adjacent elements | Medium     | [198. House Robber](https://leetcode.com/problems/house-robber/) | - | | |
| 5   | House robber                         | Medium     | [198. House Robber](https://leetcode.com/problems/house-robber/) | - | | |
| 6   | House Robber II                      | Medium     | [213. House Robber II](https://leetcode.com/problems/house-robber-ii/) (circular array variant) | - | | |


### 2D / 3D DP and DP on Grids


| #   | Problem                               | Difficulty | LeetCode | Status | Last revision | Next revision |
| --- | ------------------------------------- | ---------- | ------------------------------------------------------------------------------------------------------------------------------------------------- | --- | --- | --- |
| 1   | Ninja's training                      | Medium     | [931. Minimum Falling Path Sum](https://leetcode.com/problems/minimum-falling-path-sum/) (3-way choice per row; same DP style as “Ninja’s” sheet) | - | | |
| 2   | Grid Unique Paths : DP on Grids (DP8) | Medium     | [62. Unique Paths](https://leetcode.com/problems/unique-paths/) | - | | |
| 3   | Unique paths II                       | Medium     | [63. Unique Paths II](https://leetcode.com/problems/unique-paths-ii/) | - | | |
| 4   | Minimum path sum in Grid (DP 10)      | Medium     | [64. Minimum Path Sum](https://leetcode.com/problems/minimum-path-sum/) | - | | |
| 5   | Triangle                              | Medium     | [120. Triangle](https://leetcode.com/problems/triangle/) | - | | |
| 6   | Minimum Falling Path Sum              | Medium     | [931. Minimum Falling Path Sum](https://leetcode.com/problems/minimum-falling-path-sum/) | - | | |
| 7   | Ninja and his Friends                 | Medium     | [741. Cherry Pickup](https://leetcode.com/problems/cherry-pickup/) (two-path cherry pick; 3-friend “Ninja” variants are often sheet/GFG) | - | | |


### DP on Subsequences


| #   | Problem                                                               | Difficulty | LeetCode | Status | Last revision | Next revision |
| --- | --------------------------------------------------------------------- | ---------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------- | --- | --- | --- |
| 1   | Subset sum equal to target (DP-14)                                    | Hard       | [416. Partition Equal Subset Sum](https://leetcode.com/problems/partition-equal-subset-sum/) (boolean subset-sum DP; general “sum = target” is same table) | - | | |
| 2   | Partition equal subset sum                                            | Hard       | [416. Partition Equal Subset Sum](https://leetcode.com/problems/partition-equal-subset-sum/) | - | | |
| 3   | Partition a set into two subsets with minimum absolute sum difference | Hard       | [2035. Partition Array Into Two Arrays to Minimize Sum Difference](https://leetcode.com/problems/partition-array-into-two-arrays-to-minimize-sum-difference/) | - | | |
| 4   | Count subsets with sum K                                              | Hard       | [494. Target Sum](https://leetcode.com/problems/target-sum/) (related count DP; exact “count subsets with sum K” on positives is often GFG) | - | | |
| 5   | Count partitions with given difference                                | Hard       | [494. Target Sum](https://leetcode.com/problems/target-sum/) (reformulate subset-sum vs difference) | - | | |
| 6   | Assign Cookies                                                        | Easy       | [455. Assign Cookies](https://leetcode.com/problems/assign-cookies/) | - | | |
| 7   | Minimum Coins (DP-20)                                                 | Hard       | [322. Coin Change](https://leetcode.com/problems/coin-change/) | - | | |
| 8   | Target sum                                                            | Hard       | [494. Target Sum](https://leetcode.com/problems/target-sum/) | - | | |
| 9   | Coin Change 2 (DP-22)                                                 | Hard       | [518. Coin Change II](https://leetcode.com/problems/coin-change-ii/) | - | | |
| 10  | Unbounded knapsack                                                    | Hard       | [322. Coin Change](https://leetcode.com/problems/coin-change/) / [518. Coin Change II](https://leetcode.com/problems/coin-change-ii/) (unbounded knapsack patterns) | - | | |
| 11  | Rod Cutting Problem                                                   | Hard       | [GFG: Rod Cutting](https://www.geeksforgeeks.org/problems/rod-cutting0840/1) (unbounded knapsack variant; no direct LC) | - | | |


### DP on Strings


| #   | Problem                                                  | Difficulty | LeetCode | Status | Last revision | Next revision |
| --- | -------------------------------------------------------- | ---------- | ------------------------------------------------------------------------------------------------------------------------------------------------- | --- | --- | --- |
| 1   | Longest common subsequence                               | Hard       | [1143. Longest Common Subsequence](https://leetcode.com/problems/longest-common-subsequence/) | - | | |
| 2   | Print Longest Common Subsequence                         | Hard       | [1143. Longest Common Subsequence](https://leetcode.com/problems/longest-common-subsequence/) (reconstruct from DP table to print the actual LCS) | - | | |
| 3   | Longest common substring                                 | Hard       | [718. Maximum Length of Repeated Subarray](https://leetcode.com/problems/maximum-length-of-repeated-subarray/) (same as LCS but contiguous) | - | | |
| 4   | Longest palindromic subsequence                          | Hard       | [516. Longest Palindromic Subsequence](https://leetcode.com/problems/longest-palindromic-subsequence/) | - | | |
| 5   | Minimum insertions to make string palindrome             | Hard       | [1312. Minimum Insertion Steps to Make a String Palindrome](https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/) | - | | |
| 6   | Minimum insertions or deletions to convert string A to B | Hard       | [583. Delete Operation for Two Strings](https://leetcode.com/problems/delete-operation-for-two-strings/) | - | | |
| 7   | Shortest common supersequence                            | Hard       | [1092. Shortest Common Supersequence](https://leetcode.com/problems/shortest-common-supersequence/) | - | | |
| 8   | Distinct subsequences                                    | Hard       | [115. Distinct Subsequences](https://leetcode.com/problems/distinct-subsequences/) | - | | |
| 9   | Edit distance                                            | Hard       | [72. Edit Distance](https://leetcode.com/problems/edit-distance/) | - | | |
| 10  | Wildcard matching                                        | Hard       | [44. Wildcard Matching](https://leetcode.com/problems/wildcard-matching/) | - | | |


### DP on Stocks


| #   | Problem                                               | Difficulty | LeetCode | Status | Last revision | Next revision |
| --- | ----------------------------------------------------- | ---------- | ------------------------------------------------------------------------------------------------------------------------------------------------ | --- | --- | --- |
| 1   | Best time to buy and sell stock                       | Medium     | [121. Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) | - | | |
| 2   | Best time to buy and sell stock II                    | Medium     | [122. Best Time to Buy and Sell Stock II](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/) | - | | |
| 3   | Best time to buy and sell stock III                   | Medium     | [123. Best Time to Buy and Sell Stock III](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/) | - | | |
| 4   | Best time to buy and sell stock IV                    | Medium     | [188. Best Time to Buy and Sell Stock IV](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/) | - | | |
| 5   | Best Time to Buy and Sell Stock with Cooldown         | Medium     | [309. Best Time to Buy and Sell Stock with Cooldown](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/) | - | | |
| 6   | Best time to buy and sell stock with transaction fees | Medium     | [714. Best Time to Buy and Sell Stock with Transaction Fee](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/) | - | | |


### DP on LIS


| #   | Problem                                                     | Difficulty | LeetCode | Status | Last revision | Next revision |
| --- | ----------------------------------------------------------- | ---------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | --- | --- | --- |
| 1   | Longest Increasing Subsequence                              | Medium     | [300. Longest Increasing Subsequence](https://leetcode.com/problems/longest-increasing-subsequence/) | - | | |
| 2   | Print Longest Increasing Subsequence                        | Medium     | [300. Longest Increasing Subsequence](https://leetcode.com/problems/longest-increasing-subsequence/) (reconstruct from patience / parent pointers) | - | | |
| 3   | Longest Increasing Subsequence (Binary Search / O(n log n)) | Medium     | [300. Longest Increasing Subsequence](https://leetcode.com/problems/longest-increasing-subsequence/) (patience sorting / binary search optimized) | - | | |
| 4   | Largest Divisible Subset                                    | Medium     | [368. Largest Divisible Subset](https://leetcode.com/problems/largest-divisible-subset/) | - | | |
| 5   | Longest String Chain                                        | Medium     | [1048. Longest String Chain](https://leetcode.com/problems/longest-string-chain/) | - | | |
| 6   | Longest Bitonic Subsequence                                 | Medium     | [1671. Minimum Number of Removals to Make Mountain Array](https://leetcode.com/problems/minimum-number-of-removals-to-make-mountain-array/) (mountain / bitonic structure) | - | | |
| 7   | Number of Longest Increasing Subsequences                   | Medium     | [673. Number of Longest Increasing Subsequence](https://leetcode.com/problems/number-of-longest-increasing-subsequence/) | - | | |


### MCM DP | Partition DP


| #   | Problem                                         | Difficulty | LeetCode | Status | Last revision | Next revision |
| --- | ----------------------------------------------- | ---------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | --- | --- | --- |
| 1   | Matrix chain multiplication                     | Hard       | [312. Burst Balloons](https://leetcode.com/problems/burst-balloons/) (interval / MCM-style DP) | - | | |
| 2   | Matrix Chain Multiplication (Bottom-Up)         | Hard       | [312. Burst Balloons](https://leetcode.com/problems/burst-balloons/) (same MCM interval DP — bottom-up tabulation) | - | | |
| 3   | Minimum cost to cut the stick                   | Hard       | [1547. Minimum Cost to Cut a Stick](https://leetcode.com/problems/minimum-cost-to-cut-a-stick/) | - | | |
| 4   | Burst balloons                                  | Hard       | [312. Burst Balloons](https://leetcode.com/problems/burst-balloons/) | - | | |
| 5   | Different Ways to Evaluate a Boolean Expression | Medium     | — (GFG “Boolean Parenthesization”; closest LC-style: [241. Different Ways to Add Parentheses](https://leetcode.com/problems/different-ways-to-add-parentheses/) is numeric) | - | | |
| 6   | Palindrome partitioning II                      | Hard       | [132. Palindrome Partitioning II](https://leetcode.com/problems/palindrome-partitioning-ii/) | - | | |
| 7   | Partition Array for Maximum Sum                 | Medium     | [1043. Partition Array for Maximum Sum](https://leetcode.com/problems/partition-array-for-maximum-sum/) | - | | |


### DP on Squares


| #   | Problem                                | Difficulty | LeetCode | Status | Last revision | Next revision |
| --- | -------------------------------------- | ---------- | --------------------------------------------------------------------------------------------------------------------- | --- | --- | --- |
| 1   | Maximal Square                         | Medium     | [221. Maximal Square](https://leetcode.com/problems/maximal-square/) | - | | |
| 2   | Count Square Submatrices with All Ones | Medium     | [1277. Count Square Submatrices with All Ones](https://leetcode.com/problems/count-square-submatrices-with-all-ones/) | - | | |


### DP on Trees


| #   | Problem                       | Difficulty | LeetCode | Status | Last revision | Next revision |
| --- | ----------------------------- | ---------- | ------------------------------------------------------------------------------------------------- | --- | --- | --- |
| 1   | Unique Binary Search Trees    | Medium     | [96. Unique Binary Search Trees](https://leetcode.com/problems/unique-binary-search-trees/) | - | | |
| 2   | Unique Binary Search Trees II | Medium     | [95. Unique Binary Search Trees II](https://leetcode.com/problems/unique-binary-search-trees-ii/) | - | | |
| 3   | House Robber III              | Medium     | [337. House Robber III](https://leetcode.com/problems/house-robber-iii/) | - | | |


