// Problem: 2074. Reverse Nodes in Even Length Groups
// Link: https://leetcode.com/problems/reverse-nodes-in-even-length-groups/
// Approach:
//   - Traverse the list in groups of increasing size (1, 2, 3, ...).
//   - If the group has an even number of nodes, reverse it using a helper function.
//   - Carefully manage pointers to split and reconnect groups.
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

ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL || head->next==NULL) return head;
        left = left-1;
        right = right-1;

        if (left == 0) {
            ListNode* temp2 = head;
            for (int i = 0; i < right; i++) temp2 = temp2->next;
            ListNode* tempb = temp2->next;
            temp2->next = NULL;

            ListNode* newHead = reverse(head);
            head = newHead;

            ListNode* tail = newHead;
            while (tail->next != NULL) tail = tail->next;
            tail->next = tempb;

          return head;
        }


        ListNode* temp1 = head;

        for(int i=0; i<left-1; i++) {
            temp1 = temp1->next;
        }
        ListNode* tempa = temp1->next;
        
        ListNode* temp2 = head;
        for(int i=0; i<right; i++) {
            temp2 = temp2->next;
        }
        ListNode* tempb = temp2->next;

        temp1->next = NULL;
        temp2->next = NULL;

        tempa = reverse(tempa);
        
        temp1->next = tempa;
        while(temp1->next!=NULL) temp1 = temp1->next;
        temp1->next = tempb;

        return head;
    }

ListNode* reverseEvenLengthGroups(ListNode* head) {
        ListNode* temp = head;
        int gap = 1;  

        while(temp && temp->next) {
            int remlen = 0;
            ListNode* t = temp->next;
            for(int i=1; i<=gap+1 && t!=NULL; i++) {
                t = t->next;
                remlen++;
            }
            if(remlen < gap+1) gap = remlen-1;

            if(gap%2!=0) reverseBetween(temp, 2, 2+gap);
            gap++;
            for(int i=1;temp!=NULL && i<=gap; i++) temp = temp->next;
        }

        return head;

    }
};