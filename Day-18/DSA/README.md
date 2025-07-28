# Day-18 DSA Work

## 1. [151. Reverse Words in a String](https://leetcode.com/problems/reverse-words-in-a-string/)
**Filename**: `151_Reverse_Words_in_a_String.cpp`  
**Approach**:
- Traverse the string and split it into words, ignoring extra spaces.
- Reverse the vector of words.
- Join them using a single space to form the result.

**Time Complexity**: O(n)  
**Space Complexity**: O(n)  

---

## 2. [237. Delete Node in a Linked List](https://leetcode.com/problems/delete-node-in-a-linked-list/)
**Filename**: `237_Delete_Node_in_a_Linked_List.cpp`  
**Approach**:
- Given only access to the node to delete, copy the value from the next node into this one.
- Then skip the next node to delete it from the list.

**Time Complexity**: O(1)  
**Space Complexity**: O(1)  

---

## 3. [876. Middle of the Linked List](https://leetcode.com/problems/middle-of-the-linked-list/)
**Filename**: `876_Middle_of_the_Linked_List.cpp`  
**Approach**:
- Use the slow and fast pointer technique.
- Move slow by 1 step and fast by 2 steps.
- When fast reaches the end, slow will be at the middle.

**Time Complexity**: O(n)  
**Space Complexity**: O(1)
