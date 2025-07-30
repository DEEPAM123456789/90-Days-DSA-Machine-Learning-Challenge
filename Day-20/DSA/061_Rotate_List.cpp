// Problem: 61. Rotate List
// Link: https://leetcode.com/problems/rotate-list/
// Approach:
//   - Find the length of the list.
//   - Adjust k as k = k % len to avoid unnecessary full rotations.
//   - Connect the tail to the head to form a circular list.
//   - Find the new tail node and break the circle there.
//   - The next node becomes the new head.
// Time Complexity: O(n)
// Space Complexity: O(1)

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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL) return head;
        ListNode* i = head;
        ListNode* j = head;

        int len = 0;
        ListNode* temp = head;
        while(temp!=NULL) {
            len++;
            temp = temp->next;
        }

        while(j->next!=NULL) {
            j = j->next;
        }

        // j reaches to last node
        k = k%len;
        while(k>0) {
            j->next = i;
            while(i->next != j) i = i->next;
            i->next=NULL;
            head = j;
            j = i;
            i = head;
            k--;
        }
        return head;
    }
};