// Problem: 234. Palindrome Linked List
// Link: https://leetcode.com/problems/palindrome-linked-list/
// Approach:
//   - Find the midpoint of the linked list.
//   - Reverse the first half of the list.
//   - Compare the reversed half with the second half.
//   - If all values match, it's a palindrome.
// Time Complexity: O(n), where n is the number of nodes.
// Space Complexity: O(1), if done in-place without extra data structures.

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
};