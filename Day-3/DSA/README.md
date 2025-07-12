# Day 3 – Striver's SDE Sheet Practice

**Date:** 12 July 2025  
**Focus:** Arrays, Two Pointer Techniques, Matrix Manipulation

---

## 🔹 Problems Solved

1. **[18. 4Sum](https://leetcode.com/problems/4sum/)**
   - **Approach:**
     - Sort the array.
     - Fix the first and second elements using nested loops.
     - Use two pointers to search for the remaining pair.
     - Skip duplicate elements to avoid repeated quadruplets.
   - **Time Complexity:** O(n³)
   - **Space Complexity:** O(number of quadruplets in output)

2. **[15. 3Sum](https://leetcode.com/problems/3sum/)**
   - **Approach:**
     - Sort the array.
     - For each index, use two pointers to find pairs summing to the target.
     - Skip duplicates to get unique triplets.
   - **Time Complexity:** O(n²)
   - **Space Complexity:** O(number of triplets in output)

3. **[48. Rotate Image](https://leetcode.com/problems/rotate-image/)**
   - **Approach:**
     - Transpose the matrix (swap rows and columns).
     - Reverse each row to rotate 90 degrees clockwise.
   - **Time Complexity:** O(n²)
   - **Space Complexity:** O(1)

---

## Key Learnings

- Practiced k-Sum patterns (3Sum and 4Sum) with efficient duplicate handling.
- Reviewed in-place matrix transformations.
- Reinforced understanding of two-pointer techniques.

---

**Next:** Continue array and matrix sections or start linked lists.
