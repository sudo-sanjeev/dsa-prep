# Binary Search (Striver §4)

> **Tracking:** see [How to use](../README.md#how-to-use).

### BS on 1D Arrays


| #   | Problem                                      | Difficulty | LeetCode | Status | Last revision | Next revision |
| --- | -------------------------------------------- | ---------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | --- | --- | --- |
| 1   | Search X in sorted array                     | Easy       | [704. Binary Search](https://leetcode.com/problems/binary-search/) | - | | |
| 2   | Lower Bound                                  | Easy       | [35. Search Insert Position](https://leetcode.com/problems/search-insert-position/) (first index ≥ target) | - | | |
| 3   | Upper Bound                                  | Easy       | [744. Find Smallest Letter Greater Than Target](https://leetcode.com/problems/find-smallest-letter-greater-than-target/) (first > target; same idea on integers) | - | | |
| 4   | Search insert position                       | Easy       | [35. Search Insert Position](https://leetcode.com/problems/search-insert-position/) | - | | |
| 5   | Floor and Ceil in Sorted Array               | Easy       | [35. Search Insert Position](https://leetcode.com/problems/search-insert-position/) (insert index; neighbors are ceil/floor) | - | | |
| 6   | First and last occurrence                    | Easy       | [34. Find First and Last Position of Element in Sorted Array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/) | - | | |
| 7   | Count Occurrences in a Sorted Array          | Easy       | [34. Find First and Last Position…](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/) (count = last − first + 1) | - | | |
| 8   | Search in rotated sorted array-I             | Medium     | [33. Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/) | - | | |
| 9   | Search in rotated sorted array-II            | Medium     | [81. Search in Rotated Sorted Array II](https://leetcode.com/problems/search-in-rotated-sorted-array-ii/) | - | | |
| 10  | Find minimum in Rotated Sorted Array         | Easy       | [153. Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/) | - | | |
| 11  | Find out how many times the array is rotated | Easy       | [153. Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/) (rotation count = index of minimum, for distinct elements) | - | | |
| 12  | Single element in a Sorted Array             | Medium     | [540. Single Element in a Sorted Array](https://leetcode.com/problems/single-element-in-a-sorted-array/) | - | | |
| 13  | Find peak element                            | Medium     | [162. Find Peak Element](https://leetcode.com/problems/find-peak-element/) | - | | |


### BS on Answers


| #   | Problem                                 | Difficulty | LeetCode | Status | Last revision | Next revision |
| --- | --------------------------------------- | ---------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------- | --- | --- | --- |
| 1   | Find square root of a number            | Medium     | [69. Sqrt(x)](https://leetcode.com/problems/sqrtx/) | - | | |
| 2   | Find Nth root of a number               | Medium     | [69. Sqrt(x)](https://leetcode.com/problems/sqrtx/) (same BS-on-answer pattern; generalize exponent to n) | - | | |
| 3   | Koko eating bananas                     | Medium     | [875. Koko Eating Bananas](https://leetcode.com/problems/koko-eating-bananas/) | - | | |
| 4   | Minimum days to make M bouquets         | Medium     | [1482. Minimum Number of Days to Make m Bouquets](https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/) | - | | |
| 5   | Find the smallest divisor               | Medium     | [1283. Find the Smallest Divisor Given a Threshold](https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/) | - | | |
| 6   | Capacity to Ship Packages Within D Days | Medium     | [1011. Capacity To Ship Packages Within D Days](https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/) | - | | |
| 7   | Kth Missing Positive Number             | Medium     | [1539. Kth Missing Positive Number](https://leetcode.com/problems/kth-missing-positive-number/) | - | | |
| 8   | Aggressive Cows                         | Hard       | [1552. Magnetic Force Between Two Balls](https://leetcode.com/problems/magnetic-force-between-two-balls/) (same “maximize minimum distance” idea) | - | | |
| 9   | Book Allocation Problem                 | Hard       | [410. Split Array Largest Sum](https://leetcode.com/problems/split-array-largest-sum/) (same partition / minimize max sum) | - | | |
| 10  | Split array — largest sum               | Hard       | [410. Split Array Largest Sum](https://leetcode.com/problems/split-array-largest-sum/) | - | | |
| 11  | Painter's Partition                     | Medium     | [410. Split Array Largest Sum](https://leetcode.com/problems/split-array-largest-sum/) (same as book allocation) | - | | |
| 12  | Minimize Max Distance to Gas Station    | Hard       | [774. Minimize Max Distance to Gas Station](https://leetcode.com/problems/minimize-max-distance-to-gas-station/) | - | | |
| 13  | Median of 2 sorted arrays               | Hard       | [4. Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/) | - | | |
| 14  | Kth element of 2 sorted arrays          | Medium     | [4. Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/) (median is k = ⌊(m+n+1)/2⌋; same partition / BS idea for general k) | - | | |


### BS on 2D Arrays


| #   | Problem                             | Difficulty | LeetCode | Status | Last revision | Next revision |
| --- | ----------------------------------- | ---------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------- | --- | --- | --- |
| 1   | Search in a 2D matrix               | Medium     | [74. Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/) | - | | |
| 2   | Search a 2D Matrix II               | Medium     | [240. Search a 2D Matrix II](https://leetcode.com/problems/search-a-2d-matrix-ii/) | - | | |
| 3   | Find a Peak Element II              | Medium     | [1901. Find a Peak Element II](https://leetcode.com/problems/find-a-peak-element-ii/) | - | | |
| 4   | Kth smallest in a sorted matrix     | Hard       | [378. Kth Smallest Element in a Sorted Matrix](https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/) | - | | |
| 5   | Matrix Median                       | Hard       | [GFG: Median in a row-wise sorted Matrix](https://www.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1) (BS on answer space; no direct LC) | - | | |
| 6   | Leftmost column with at least a one | Medium     | [1428. Leftmost Column with at Least a One](https://leetcode.com/problems/leftmost-column-with-at-least-a-one/) (binary search on rows / matrix) | - | | |
