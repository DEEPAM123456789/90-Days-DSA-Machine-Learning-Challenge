// Problem: 725. Split Linked List in Parts
// Link: https://leetcode.com/problems/split-linked-list-in-parts/
// Approach:
//   - Count total nodes.
//   - Calculate base size and extra remainder to distribute evenly.
//   - Create parts one by one, cutting the list appropriately.
// Time Complexity: O(n)
// Space Complexity: O(k), where k is the number of parts in result vector.

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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>ans;

        ListNode* temp = head;
        int n = 0;
        while(temp) {
            temp = temp->next;
            n++;
        }

        int size = n/k;
        int rem = n%k;
        temp = head;
        while(temp) {
            ListNode* c = new ListNode(-1);
            ListNode* tempc = c;
            int s = size;
            if(rem>0) s++;
            rem--;
            for(int i=1; i<=s; i++) {
                tempc->next = temp;
                temp = temp->next;
                tempc = tempc->next;
            }
            tempc->next = NULL;
            ans.push_back(c->next);
        }

        if(ans.size()<k) {
            int count = k - ans.size();
            for(int i=1; i<=count; i++) {
                ans.push_back(NULL);
            }
        }

        return ans;
    }
};