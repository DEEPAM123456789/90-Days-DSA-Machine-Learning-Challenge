# Day 16 - DSA Recursion Problems (Revision)

---

## Problem: 22. Generate Parentheses
- **Link**: [https://leetcode.com/problems/generate-parentheses/](https://leetcode.com/problems/generate-parentheses/)
- **Approach**:
  - Use backtracking to place '(' and ')' ensuring at every step that the number of closing brackets does not exceed the number of opening brackets.
- **Time Complexity**: O(2^n)
- **Space Complexity**: O(n) — recursion stack

---

## Problem: 46. Permutations
- **Link**: [https://leetcode.com/problems/permutations/](https://leetcode.com/problems/permutations/)
- **Approach**:
  - Use recursion to choose each element one by one and recursively permute the remaining.
- **Time Complexity**: O(n * n!)
- **Space Complexity**: O(n!) — to store all permutations

---

## Problem: 60. Permutation Sequence
- **Link**: [https://leetcode.com/problems/permutation-sequence/](https://leetcode.com/problems/permutation-sequence/)
- **Approach**:
  - Use factorial number system to determine the digit at each position.
  - Use recursion to eliminate chosen digits and update `k` accordingly.
- **Time Complexity**: O(n^2)
- **Space Complexity**: O(n)
