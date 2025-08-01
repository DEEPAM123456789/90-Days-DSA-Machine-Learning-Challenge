// Problem: 92. Reverse Linked List II
// Link: https://leetcode.com/problems/reverse-linked-list-ii/
// Approach:
//   - Traverse to the node at position `left` and isolate the sublist till `right`.
//   - Reverse the sublist using a helper function.
//   - Reconnect the reversed sublist with the remaining parts.
// Time Complexity: O(n), where n is the number of nodes.
// Space Complexity: O(1), using only pointers.

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

    bool isPalindrome(ListNode* head) {

        // Method-1
        // ListNode* c = new ListNode(-1);

        // // Deep copy of linked list
        // ListNode* temp = head;
        // ListNode* tempc = c;
        // while(temp) {
        //     ListNode* node = new ListNode(temp->val);
        //     tempc->next = node;
        //     temp = temp->next;
        //     tempc = tempc->next;
        // }
        // c = c->next;

        // c = reverse(c);
        // ListNode* a = head;
        // ListNode* b = c;

        // while(a){
        //     if(a->val!=b->val) return false;
        //     a = a->next;
        //     b = b->next;
        // }
        // return true;

        // Method-2
        if(head->next == NULL) return true;
        
        ListNode* temp = head;
        int len = 0;

        while(temp) {
            temp = temp->next;
            len++;
        }

        temp = head;
        for(int i=0; i<len/2-1; i++) {
            temp = temp->next;
        }
        ListNode* temp1 = temp->next;
        temp->next = NULL;

        head = reverse(head);
        temp=head;
        while(temp->next!=NULL) {
            temp = temp->next;
        } 
        temp->next = temp1;
        temp = head;
        if(len%2!=0) temp1 = temp1->next;  

        while(temp1) {
            if(temp->val != temp1->val) return false;
            temp = temp->next;
            temp1 = temp1->next;
        }
        return true;
    } 
};