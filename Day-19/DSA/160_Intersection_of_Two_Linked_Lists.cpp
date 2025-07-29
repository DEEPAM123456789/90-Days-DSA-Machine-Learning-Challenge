// Problem: 160. Intersection of Two Linked Lists
// Link: https://leetcode.com/problems/intersection-of-two-linked-lists/
// Approach:
//   - First, calculate the lengths of both linked lists (lenA and lenB).
//   - Move the pointer of the longer list ahead by the difference in lengths.
//   - Traverse both lists together until the nodes match or both become NULL.
//   - If nodes match, that's the intersection node; otherwise, return NULL.
// Time Complexity: O(n + m), where n and m are the lengths of the two lists.
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA = headA;
        ListNode* tempB = headB;

        int lenA=0;
        int lenB=0;

        while(tempA!=NULL) {
            lenA++;
            tempA = tempA->next;
        }

        while(tempB!=NULL) {
            lenB++;
            tempB = tempB->next;
        }
        int idx=0;
        tempA = headA;
        tempB = headB;
        if(lenB > lenA) {
            idx=lenB-lenA;
            for (int i=1; i<=idx; i++) {
                tempB = tempB->next;
          }
        }
        else {
            idx=lenA-lenB;
            for (int i=1; i<=idx; i++) {
                tempA = tempA->next;
          }
        }

          while(tempA!=NULL && tempB!=NULL) {
            if(tempA==tempB) return tempA;
            tempA = tempA->next;
            tempB = tempB->next;
          }
          return NULL;
    }
};