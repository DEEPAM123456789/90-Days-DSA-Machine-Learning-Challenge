// Problem: 19. Remove Nth Node From End of List
// Link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/
// Approach:
//   - Use a dummy node pointing to the head for easy edge case handling.
//   - Use two pointers: advance the first pointer n steps ahead.
//   - Then move both pointers until the first reaches the end.
//   - The second pointer will be right before the node to be removed.
//   - Adjust pointers to delete the target node.
// Time Complexity: O(n), where n is the number of nodes in the list.
// Space Complexity: O(1), using only a few pointers.


#include<iostream>
using namespace std;
 // * Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Method -1

        // int len=0;
        
        // ListNode* temp = head;
        // while(temp!=NULL) {
        //     len++;
        //     temp=temp->next;
        // }

        // if(n==len) {
        //     head=head->next;
        //     return head;
        // }

        // temp = head;
        // int del_idx = len-n;
        // for(int i=1; i<del_idx; i++) {
        //     temp = temp->next;
        // }
        // temp->next = temp->next->next;
        // return head;

        // Method-2
        ListNode* slow = head;
        ListNode* fast = head;

        for (int i=1; i<=n+1; i++) {
            if(fast==NULL) return head->next;
            fast=fast->next;
        }
        while(fast!=NULL) {
            slow = slow->next;
            fast = fast->next;
        }
        slow->next=slow->next->next;
        return head;
    }
};