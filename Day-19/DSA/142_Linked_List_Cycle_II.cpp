// Problem: 142. Linked List Cycle II
// Link: https://leetcode.com/problems/linked-list-cycle-ii/
// Approach:
//   - Use Floyd’s Cycle Detection Algorithm to detect the cycle.
//   - If a cycle exists, reset one pointer to head.
//   - Move both pointers one step at a time; the node where they meet is the start of the cycle.
// Time Complexity: O(n), where n is the number of nodes in the list.
// Space Complexity: O(1), as we use constant space.

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
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast != NULL && fast->next!=NULL) {
            fast = fast->next->next;
            slow = slow->next;
            if(fast==slow) {
                slow=head;
                while(slow!=fast) {
                    slow=slow->next;
                    fast=fast->next;
            }
                return slow;
            }
        }
        return NULL;
    }
};