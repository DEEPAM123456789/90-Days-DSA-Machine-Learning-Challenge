# Day 4 – Striver's SDE Sheet Practice

**Date:** 13 July 2025  
**Focus:** Prefix Sum, Hashing, Set-based sequence detection

---

## Problems Solved

1. **[128. Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/)**
   - **Approach 1:** Sort the array and check for consecutive elements.
   - **Approach 2 (Used):** 
     - Use an `unordered_set` for O(1) lookups.
     - For each element, expand forward if it starts a new sequence.
   - **Time Complexity:** O(n)
   - **Space Complexity:** O(n)

2. **[560. Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k/)**
   - **Approach:** 
     - Maintain prefix sum.
     - Use a hashmap to store frequency of prefix sums.
     - Check if (currentSum - k) exists to count subarrays.
   - **Time Complexity:** O(n)
   - **Space Complexity:** O(n)

---

## Key Learnings

- Optimized prefix sum technique with hashmap is a powerful tool.
- Using `unordered_set` can reduce search complexity to O(1).
- Efficient streak detection avoids unnecessary sorting.

---
