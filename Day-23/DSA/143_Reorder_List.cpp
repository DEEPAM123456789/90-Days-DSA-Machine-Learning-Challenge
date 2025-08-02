// Problem: 143. Reorder List
// Link: https://leetcode.com/problems/reorder-list/
// Approach:
//   - Use slow/fast pointers to find the middle of the list.
//   - Reverse the second half.
//   - Merge the two halves alternately.
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
    ListNode* reverse(ListNode* head) {
        ListNode* temp = head;
        if(head==NULL) return head;

        ListNode* tempA = head->next;
        ListNode* tempB = new ListNode(-1); 

        while(temp!=NULL) {
            temp->next = tempB;
            tempB = temp;
            temp = tempA;
            if(tempA==NULL) break;
            tempA = tempA->next;
        }
        head->next = NULL;
        return tempB;
    }

    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next!=NULL && fast->next->next!=NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }

        // 1-2-3-4-null
        ListNode* slow1 = slow->next;
        slow->next = NULL;
        // 1-2-null 3-4-null
        slow1 = reverse(slow1);
        // 1-2-null 4-3-null

        ListNode* c = new ListNode(-1);
        ListNode* tempc = c;

        ListNode* a = head;
        ListNode* tempa = a;

        ListNode* b = slow1;
        ListNode* tempb = b;

        while(tempa!=NULL && tempb!=NULL) {
            tempc->next = tempa;
            tempa = tempa->next;
            tempc = tempc->next;

            tempc->next = tempb;
            tempb = tempb->next;
            tempc = tempc->next;
        }

        if (tempa != NULL) tempc->next = tempa;
        else tempc->next = tempb;

        return;
    }
};