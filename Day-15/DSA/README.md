# Day-15 DSA Problems

## Problem 1: [39. Combination Sum](https://leetcode.com/problems/combination-sum/)
### Approach:
- Use backtracking to explore all combinations that sum to the target.
- Recursively add elements to the current subset if they don’t exceed the target.
- Backtrack when the sum exceeds the target.
- Pass the current index instead of 0 to avoid using elements before it again (ensures uniqueness).
  
### Time Complexity:
- Worst case: O(2^n), where n = number of elements

### Space Complexity:
- O(target) – stack space in worst case due to recursion depth

---

## Problem 2: [779. K-th Symbol in Grammar](https://leetcode.com/problems/k-th-symbol-in-grammar/)
### Approach:
- Use recursion to find the symbol in the previous row.
- The symbol at `k` depends on whether it's in the first or second half.
- Flip result if it’s in the second half (even index).

### Time Complexity:
- O(n)

### Space Complexity:
- O(n) – due to recursion stack

---

## Problem 3: [60. Permutation Sequence](https://leetcode.com/problems/permutation-sequence/)
### Approach:
- Use factorial number system to find the index of digits in the final permutation.
- Recursively select digits by calculating how many permutations each fixed digit creates.

### Time Complexity:
- O(n^2) – due to substring and factorial computation

### Space Complexity:
- O(n) – for recursion and storing intermediate strings
