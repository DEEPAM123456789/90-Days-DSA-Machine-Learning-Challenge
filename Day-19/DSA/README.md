# Day-19 DSA Work

## 1. [206. Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)
**Filename**: `206_Reverse_Linked_List.cpp`  
**Approach**:
- Iterate through the list and reverse the links using three pointers: prev, curr, next.
- Update `prev` and `curr` in each iteration until the list ends.

**Time Complexity**: O(n)  
**Space Complexity**: O(1)  

---

## 2. [141. Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/)
**Filename**: `141_Linked_List_Cycle.cpp`  
**Approach**:
- Use Floyd’s Cycle Detection (slow and fast pointers).
- If fast meets slow, a cycle exists.

**Time Complexity**: O(n)  
**Space Complexity**: O(1)  

---

## 3. [142. Linked List Cycle II](https://leetcode.com/problems/linked-list-cycle-ii/)
**Filename**: `142_Linked_List_Cycle_II.cpp`  
**Approach**:
- Use Floyd’s Cycle Detection to detect cycle.
- Reset one pointer to head, and move both one step at a time to find start of the cycle.

**Time Complexity**: O(n)  
**Space Complexity**: O(1)  

---

## 4. [160. Intersection of Two Linked Lists](https://leetcode.com/problems/intersection-of-two-linked-lists/)
**Filename**: `160_Intersection_of_Two_Linked_Lists.cpp`  
**Approach**:
- Traverse both lists and switch pointers to the opposite head when reaching end.
- They will meet at the intersection node or null.

**Time Complexity**: O(n + m)  
**Space Complexity**: O(1)  

---

## 5. [19. Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)
**Filename**: `19_Remove_Nth_Node_From_End_of_List.cpp`  
**Approach**:
- Use two pointers with a gap of `n`.
- When fast reaches the end, slow will be before the node to delete.

**Time Complexity**: O(n)  
**Space Complexity**: O(1)  

---

## 6. [21. Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)
**Filename**: `21_Merge_Two_Sorted_Lists.cpp`  
**Approach**:
- Use two pointers to merge both lists into one sorted list iteratively.

**Time Complexity**: O(n + m)  
**Space Complexity**: O(1)
