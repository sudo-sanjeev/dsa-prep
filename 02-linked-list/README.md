# Linked List (Striver §6)

### Learn 1D Linked List


| #   | Problem                              | Difficulty | LeetCode                                                                                                                                                                        |
| --- | ------------------------------------ | ---------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| 1   | Introduction to Singly Linked List   | Easy       | [707. Design Linked List](https://leetcode.com/problems/design-linked-list/) (implements the core ops)                                                                          |
| 2   | Insertion at the head of Linked List | Easy       | [707. Design Linked List](https://leetcode.com/problems/design-linked-list/) (add at head)                                                                                      |
| 3   | Deletion of the head of LL           | Easy       | [707. Design Linked List](https://leetcode.com/problems/design-linked-list/) / [237. Delete Node in a Linked List](https://leetcode.com/problems/delete-node-in-a-linked-list/) |
| 4   | Find the length of the Linked List   | Easy       | [707. Design Linked List](https://leetcode.com/problems/design-linked-list/) (`size` / one pass O(n)); or any traversal to count nodes                                          |
| 5   | Search in Linked List                | Medium     | [707. Design Linked List](https://leetcode.com/problems/design-linked-list/) (`get` / find by value — same traversal pattern)                                                   |


### Learn Doubly Linked List


| #   | Problem                              | Difficulty | LeetCode                                                                                                                                                                         |
| --- | ------------------------------------ | ---------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| 1   | Introduction to Doubly LL            | Easy       | [146. LRU Cache](https://leetcode.com/problems/lru-cache/) (classic doubly-linked + map) · [1472. Design Browser History](https://leetcode.com/problems/design-browser-history/) |
| 2   | Insert node before head in Doubly LL | Easy       | [1472. Design Browser History](https://leetcode.com/problems/design-browser-history/) (DLL insert patterns)                                                                      |
| 3   | Delete head of Doubly Linked List    | Easy       | [1472. Design Browser History](https://leetcode.com/problems/design-browser-history/)                                                                                            |
| 4   | Reverse a Doubly Linked List         | Medium     | [GFG / sheet](https://www.geeksforgeeks.org/reverse-a-doubly-linked-list/) (same pointer swaps; LC rarely titles this)                                                           |


### Medium problems (singly LL)


| #   | Problem                                     | Difficulty | LeetCode                                                                                                                                                 |
| --- | ------------------------------------------- | ---------- | -------------------------------------------------------------------------------------------------------------------------------------------------------- |
| 1   | Middle of a Linked List [Tortoise & Hare]   | Easy       | [876. Middle of the Linked List](https://leetcode.com/problems/middle-of-the-linked-list/)                                                               |
| 2   | Reverse a Linked List [Iterative]           | Medium     | [206. Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)                                                                           |
| 3   | Reverse a LL                                | Medium     | [206. Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)                                                                           |
| 4   | Detect a loop in LL                         | Medium     | [141. Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/)                                                                               |
| 5   | Find the starting point in LL               | Medium     | [142. Linked List Cycle II](https://leetcode.com/problems/linked-list-cycle-ii/)                                                                         |
| 6   | Length of loop in LL                        | Medium     | [142. Linked List Cycle II](https://leetcode.com/problems/linked-list-cycle-ii/) (find start, then walk loop)                                            |
| 7   | Check if LL is palindrome or not            | Medium     | [234. Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/)                                                                     |
| 8   | Segregate odd and even nodes in Linked List | Medium     | [328. Odd Even Linked List](https://leetcode.com/problems/odd-even-linked-list/)                                                                         |
| 9   | Remove Nth node from the back of the LL     | Medium     | [19. Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)                                                  |
| 10  | Delete the middle node in LL                | Medium     | [2095. Delete the Middle Node of a Linked List](https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/)                                  |
| 11  | Sort LL                                     | Hard       | [148. Sort List](https://leetcode.com/problems/sort-list/)                                                                                               |
| 12  | Sort a Linked List of 0's, 1's and 2's      | Medium     | [GFG: sort 0s, 1s and 2s](https://www.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1) (Dutch flag on LL; LC has no exact twin) |
| 13  | Find the intersection point of Y LL         | Medium     | [160. Intersection of Two Linked Lists](https://leetcode.com/problems/intersection-of-two-linked-lists/)                                                 |
| 14  | Add one to a number represented by LL       | Medium     | [369. Plus One Linked List](https://leetcode.com/problems/plus-one-linked-list/) (**LC Premium** — carry from least significant digit)                   |
| 15  | Add two numbers in Linked List              | Medium     | [2. Add Two Numbers](https://leetcode.com/problems/add-two-numbers/)                                                                                     |


### Medium problems (DLL)


| #   | Problem                                         | Difficulty | LeetCode                                                                                                                                    |
| --- | ----------------------------------------------- | ---------- | ------------------------------------------------------------------------------------------------------------------------------------------- |
| 1   | Delete all occurrences of a key in DLL          | Hard       | [203. Remove Linked List Elements](https://leetcode.com/problems/remove-linked-list-elements/) (singly; same idea on DLL with prev)         |
| 2   | Find pairs with given sum in Doubly Linked List | Medium     | [167. Two Sum II](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/) (two-pointer pattern; DLL is two-pointer from both ends) |
| 3   | Remove duplicates from sorted DLL               | Hard       | [83. Remove Duplicates from Sorted List](https://leetcode.com/problems/remove-duplicates-from-sorted-list/) (singly; extend with `prev`)    |


### Hard problems (LL)


| #   | Problem                                 | Difficulty | LeetCode                                                                                                               |
| --- | --------------------------------------- | ---------- | ---------------------------------------------------------------------------------------------------------------------- |
| 1   | Reverse LL in group of given size K     | Hard       | [25. Reverse Nodes in k-Group](https://leetcode.com/problems/reverse-nodes-in-k-group/)                                |
| 2   | Rotate a LL                             | Hard       | [61. Rotate List](https://leetcode.com/problems/rotate-list/)                                                          |
| 3   | Flattening of LL                        | Hard       | [430. Flatten a Multilevel Doubly Linked List](https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/) |
| 4   | Clone a LL with random and next pointer | Hard       | [138. Copy List with Random Pointer](https://leetcode.com/problems/copy-list-with-random-pointer/)                     |
