# Day 23 – DSA Progress

## Problems Solved:

---

### 1. [143. Reorder List](https://leetcode.com/problems/reorder-list/)
- **Approach**:  
  - Find the middle using slow/fast pointers.  
  - Reverse the second half.  
  - Merge the two halves alternately.
- **Time Complexity**: O(n)  
- **Space Complexity**: O(1)

---

### 2. [725. Split Linked List in Parts](https://leetcode.com/problems/split-linked-list-in-parts/)
- **Approach**:  
  - Count total nodes.  
  - Divide nodes evenly into `k` parts, some may have one extra node.  
  - Break list into new parts and return in a vector.
- **Time Complexity**: O(n)  
- **Space Complexity**: O(k)

---

### 3. [2058. Find the Minimum and Maximum Number of Nodes Between Critical Points](https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points/)
- **Approach**:  
  - Traverse with three pointers to detect local min/max (critical points).  
  - Track positions to compute min and max distances.
- **Time Complexity**: O(n)  
- **Space Complexity**: O(1)

---
