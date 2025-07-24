# Day-14 DSA Progress 

## Problems Solved

### 1. [2596. Check Knight Tour Configuration](https://leetcode.com/problems/check-knight-tour-configuration/)
- **Approach**:  
  Used recursive DFS to validate each knight move step from 0 to n²-1.  
  Checked 8 possible knight moves at each step.
- **Time Complexity**: O(n²)
- **Space Complexity**: O(n²) (due to recursion stack)
- **Key Concepts**: DFS, backtracking, grid traversal.

---

### 2. [78. Subsets](https://leetcode.com/problems/subsets/)
- **Approach**:  
  Used backtracking to generate all subsets (include/exclude current element).  
  Added subset when index reached end.
- **Time Complexity**: O(2^n)
- **Space Complexity**: O(n)
- **Key Concepts**: Recursion, backtracking, subset generation.

---

### 3. [90. Subsets II](https://leetcode.com/problems/subsets-ii/)
- **Approach**:  
  Sort the input and use backtracking.  
  Skip over consecutive duplicates to avoid duplicate subsets.
- **Time Complexity**: O(2^n)
- **Space Complexity**: O(n)
- **Key Concepts**: Backtracking, handling duplicates.
