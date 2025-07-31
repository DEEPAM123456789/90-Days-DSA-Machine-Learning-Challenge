// Problem: 148. Sort List
// Link: https://leetcode.com/problems/sort-list/
// Approach:
//   - Use merge sort on linked list.
//   - Find the middle using slow-fast pointers.
//   - Recursively sort the two halves.
//   - Merge the two sorted halves.
// Time Complexity: O(n log n)
// Space Complexity: O(log n) for recursion stack
