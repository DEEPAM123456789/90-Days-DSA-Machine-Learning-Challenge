# Day 20 – DSA Progress 

## Problems Solved:

---

### 1. [83. Remove Duplicates from Sorted List](https://leetcode.com/problems/remove-duplicates-from-sorted-list/)
- **Approach**: Traverse the list with two pointers. If a duplicate is found, skip the node by adjusting the next pointer.
- **Time Complexity**: O(n²)
- **Space Complexity**: O(1)

---

### 2. [59. Spiral Matrix II](https://leetcode.com/problems/spiral-matrix-ii/)
- **Approach**: Simulate the spiral traversal using boundary markers (`minr`, `maxr`, `minc`, `maxc`) and fill values incrementally in a matrix.
- **Time Complexity**: O(n²)
- **Space Complexity**: O(n²)

---

### 3. [2326. Spiral Matrix IV](https://leetcode.com/problems/spiral-matrix-iv/)
- **Approach**: Traverse the matrix in spiral order and fill it using values from a linked list. Use boundaries to control the direction.
- **Time Complexity**: O(m × n)
- **Space Complexity**: O(m × n)

---

### 4. [21. Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)
- **Approach**: Use a dummy node and iteratively attach the smaller node from both lists. Finally, attach the remaining part of the non-empty list.
- **Time Complexity**: O(m + n)
- **Space Complexity**: O(1)

---

### 5. [61. Rotate List](https://leetcode.com/problems/rotate-list/)
- **Approach**: First count the length of the list, then perform `k % len` rotations by adjusting the next pointers from tail to head.
- **Time Complexity**: O(n × k)
- **Space Complexity**: O(1)

---
