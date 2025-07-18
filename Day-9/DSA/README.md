# Day-9 DSA Problems

## Problems Solved

1. **Generate Parentheses**
   - **Link**: [LeetCode 22](https://leetcode.com/problems/generate-parentheses/)
   - **Approach**:
     - Use recursion to generate all valid combinations of parentheses.
     - Constraints:
       - Add '(' only if open brackets < n
       - Add ')' only if closed < open
   - **Time Complexity**: O(2^n)
   - **Space Complexity**: O(n)

2. **K-th Symbol in Grammar**
   - **Link**: [LeetCode 779](https://leetcode.com/problems/k-th-symbol-in-grammar/)
   - **Approach**:
     - Use recursion to trace back to previous row.
     - Flip or preserve value based on whether k is odd/even.
   - **Time Complexity**: O(n)
   - **Space Complexity**: O(n)
