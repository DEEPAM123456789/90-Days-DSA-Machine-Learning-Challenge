// Problem: 876. Middle of the Linked List
// Link: https://leetcode.com/problems/middle-of-the-linked-list/
// Approach:
//   - Use two pointers: slow and fast.
//   - Move slow by 1 step and fast by 2 steps in each iteration.
//   - When fast reaches the end, slow will be at the middle of the list.
// Time Complexity: O(N), where N is the number of nodes in the list.
// Space Complexity: O(1), no extra space used.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 // * Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

 class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }   
        return slow;
    }
};