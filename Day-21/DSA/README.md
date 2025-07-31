# Day 21 – DSA Progress 

## Problems Solved:

---

### 1. [23. Merge k Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/)
- **Approach**: Repeatedly merge two lists from the array using a helper merge function and push the merged list back. Continue until only one list remains.
- **Time Complexity**: O(N * k), where N is the total number of nodes and k is the number of lists.
- **Space Complexity**: O(1)

---

### 2. [148. Sort List](https://leetcode.com/problems/sort-list/)
- **Approach**: Apply merge sort. Use fast and slow pointers to find the midpoint. Recursively sort both halves and then merge them using a helper function.
- **Time Complexity**: O(n log n)
- **Space Complexity**: O(log n) for the recursion stack

---

### 3. [86. Partition List](https://leetcode.com/problems/partition-list/)
- **Approach**: Create two dummy lists — one for nodes less than x and another for nodes greater than or equal to x. Link both at the end and return.
- **Time Complexity**: O(n)
- **Space Complexity**: O(1)

---
