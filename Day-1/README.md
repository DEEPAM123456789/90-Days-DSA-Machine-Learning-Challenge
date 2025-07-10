# Day 1 – Striver's SDE Sheet Practice

**Date:** 10 July 2025  
**Focus:** Arrays & Binary Search  

Today I solved 4 problems from Striver's SDE Sheet to strengthen my DSA fundamentals.

---

## Problems Solved

1. **[287. Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/)**
   - **Approach:** Used an auxiliary array to track visited numbers. If a number was seen before, it's the duplicate.
   - **Time Complexity:** O(n)
   - **Space Complexity:** O(n)

2. **[Find the Repeating and Missing Number](https://www.geeksforgeeks.org/find-a-repeating-and-a-missing-number/)**
   - **Approach:** Marked visited indices in an auxiliary array to find the duplicate, then used the sum formula to find the missing number.
   - **Time Complexity:** O(n)
   - **Space Complexity:** O(n)

3. **[74. Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/)**
   - **Approach:** Iterated through each row; if the last element was ≥ target, did a linear search in that row.
   - **Time Complexity:** O(n * m)
   - **Space Complexity:** O(1)

4. **[50. Pow(x, n)](https://leetcode.com/problems/powx-n/)**
   - **Approach:** Fast exponentiation (divide and conquer) with recursive calls to compute power efficiently.
   - **Time Complexity:** O(log n)
   - **Space Complexity:** O(log n)

---

## Files

- `287_Find_the_Duplicate_Number.cpp`
- `Find_Repeating_and_Missing_Number.cpp`
- `74_Search_a_2D_Matrix.cpp`
- `50_Pow_x_n.cpp`

---

## Notes

- Practiced array manipulation, frequency counting, and efficient exponentiation.
- Reinforced understanding of time and space complexities.
- Next, I plan to optimize my 2D matrix search to binary search.

---
