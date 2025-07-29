// Problem: 206. Reverse Linked List
// Link: https://leetcode.com/problems/reverse-linked-list/
// Approach:
//   - Initialize three pointers: prev (nullptr), curr (head), and next (nullptr).
//   - Iterate through the list and reverse the direction of each node's next pointer.
//   - Move the pointers one step forward in each iteration.
//   - Return prev as the new head after the loop ends.
// Time Complexity: O(n), where n is the number of nodes in the list.
// Space Complexity: O(1), as we use only constant extra space.

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
    ListNode* reverseList(ListNode* head) {
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
};