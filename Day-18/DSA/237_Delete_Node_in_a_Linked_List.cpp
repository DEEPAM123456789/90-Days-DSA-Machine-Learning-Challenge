// Problem: 237. Delete Node in a Linked List
// Link: https://leetcode.com/problems/delete-node-in-a-linked-list/
// Approach:
//   - Copy the value from the next node into the current node.
//   - Bypass the next node by pointing current's next to next's next.
//   - Effectively deletes the current node without needing the previous node.
// Time Complexity: O(1), constant time operation.
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
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
        return;
    }
};