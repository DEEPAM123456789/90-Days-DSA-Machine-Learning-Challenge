// Problem: 86. Partition List
// Link: https://leetcode.com/problems/partition-list/
// Approach:
//   - Use two dummy lists: one for nodes < x and one for nodes ≥ x.
//   - Traverse the original list and divide nodes accordingly.
//   - Connect both lists at the end.
// Time Complexity: O(n)
// Space Complexity: O(1)
