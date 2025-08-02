// Problem: 2058. Find the Minimum and Maximum Number of Nodes Between Critical Points
// Link: https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points/
// Approach:
//   - Traverse using three pointers (prev, curr, next).
//   - Track indexes of critical points (local min or max).
//   - Store first and last, and calculate min distance between consecutive critical points.
// Time Complexity: O(n)
// Space Complexity: O(1)

#include<iostream>
#include<vector>
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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* a = head;
        ListNode* b = head->next;
        ListNode* c = head->next->next;

        int idx = 1;
        int fidx = -1;
        int sidx = -1;
        int maxd = INT8_MIN;
        if(c==NULL) return {-1, -1};

        while(c) {
            if((b->val < c->val && b->val < a->val) || (b->val > c->val && b->val > a->val)) {
                if(fidx==-1) fidx = idx;
                else sidx = idx;
            }
            idx++;
            a = a->next;
            b = b->next;
            c = c->next;
        }
        if(sidx==-1) return {-1,-1};
        maxd = sidx-fidx;

        idx = 1;
        fidx = -1;
        sidx = -1;
        a = head;
        b = head->next;
        c = head->next->next;
        int mind = INT8_MAX;

        while(c) {
            if((b->val < c->val && b->val < a->val) || (b->val > c->val && b->val > a->val)) {
                fidx = sidx;
                sidx = idx;
                if(fidx!=-1) {
                    mind = min(mind, sidx-fidx);
                }
            }
            idx++;
            a = a->next;
            b = b->next;
            c = c->next;
        }
        return {mind, maxd};
    }
};