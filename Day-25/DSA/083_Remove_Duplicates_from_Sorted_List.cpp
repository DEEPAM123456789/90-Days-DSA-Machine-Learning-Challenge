// Problem: 83. Remove Duplicates from Sorted List
// Link: https://leetcode.com/problems/remove-duplicates-from-sorted-list/
// Approach:
//   - Use two pointers, fix one and compare with its next.
//   - Skip over nodes with duplicate values by adjusting the `.next` pointers.
// Time Complexity: O(n^2) — Your approach is quadratic; it can be optimized.
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
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp1 = head;

        while(temp1) {
            ListNode* temp2 = temp1->next;
            while(temp2) {
                if(temp1->val == temp2->val) {
                    temp1->next = temp1->next->next;
                }
                    temp2 = temp2->next;
            }
            temp1 = temp1->next;
        }
        return head;

    }   
};
 