// Problem: 148. Sort List
// Link: https://leetcode.com/problems/sort-list/
// Approach:
//   - Use merge sort algorithm for linked lists.
//   - Find the middle of the list using the slow-fast pointer approach.
//   - Recursively divide the list into halves.
//   - Merge the sorted halves using a helper merge function.
// Time Complexity: O(n log n), where n is the number of nodes in the list.
// Space Complexity: O(log n), due to recursion stack for merge sort.
