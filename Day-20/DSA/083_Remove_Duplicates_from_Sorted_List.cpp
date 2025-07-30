// Problem: 83. Remove Duplicates from Sorted List
// Link: https://leetcode.com/problems/remove-duplicates-from-sorted-list/
// Approach:
//   - Traverse the list with a pointer.
//   - If the current node and next node have the same value, skip the next node.
//   - Continue this process until the end of the list.
//   - This works because the list is sorted, so duplicates are adjacent.
// Time Complexity: O(n)
// Space Complexity: O(1)

#include<iostream>
using namespace std;
 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

  class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;
        ListNode* temp1 = head;
        ListNode* temp2 = head;

        while(temp1!=NULL) {
            ListNode* temp2 = temp1->next;
            while(temp2!=NULL) {
                if(temp1->val == temp2->val) temp1->next = temp1->next->next;
                temp2 = temp2->next;
            }
            temp1 = temp1->next;
        }
        return head;
    }
};