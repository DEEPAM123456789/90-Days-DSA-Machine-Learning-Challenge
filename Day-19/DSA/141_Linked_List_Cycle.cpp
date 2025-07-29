// Problem: 141. Linked List Cycle
// Link: https://leetcode.com/problems/linked-list-cycle/
// Approach:
//   - Use Floyd’s Cycle Detection Algorithm (Tortoise and Hare).
//   - Move slow pointer by 1 step and fast pointer by 2 steps.
//   - If a cycle exists, they will eventually meet.
//   - If fast reaches the end, no cycle exists.
// Time Complexity: O(n), where n is the number of nodes in the list.
// Space Complexity: O(1), as no extra space is used.

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
    bool hasCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast!=NULL && fast->next!=NULL) {
            fast = fast->next->next;
            slow = slow->next;
            if(fast==slow) return true;
        }
        return false;
    }
};