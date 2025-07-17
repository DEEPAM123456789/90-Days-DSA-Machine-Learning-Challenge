# Day 7 – DSA Practice 

Today’s focus was on **Recursion** and **Backtracking**, specifically solving the Subsets problems. These problems help build a strong foundation for solving future problems like permutations, combinations, and N-Queens.

---

## Problem 1: [78. Subsets](https://leetcode.com/problems/subsets/)

### Approach:
Used recursion to generate all possible subsets (the power set) by including or excluding each element.

### Code Flow:
- Base case: when index reaches the end of the array, push the current subset into results.
- Recursive case: 
  - Include current element
  - Exclude current element

### Time Complexity:
- **O(n × 2ⁿ)** where `n` is the size of the input array.

### Space Complexity:
- **O(2ⁿ × k)** for storing all subsets.

---

## Problem 2: [90. Subsets II](https://leetcode.com/problems/subsets-ii/)

### Approach:
Handled duplicates by sorting the array and skipping over duplicate elements during recursion.

### Code Flow:
- Sort the input array to bring duplicates together.
- After excluding an element, skip all its duplicates before the next recursive call.

### Time Complexity:
- **O(n × 2ⁿ)** same as previous, with slight overhead for skipping duplicates.

### Space Complexity:
- **O(2ⁿ × k)** similar reasoning.

---

