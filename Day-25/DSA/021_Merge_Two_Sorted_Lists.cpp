// Problem: 21. Merge Two Sorted Lists
// Link: https://leetcode.com/problems/merge-two-sorted-lists/
// Approach:
//   - Use two pointers to traverse both lists.
//   - Compare current nodes and attach the smaller one to a dummy node.
//   - Continue until all nodes are merged in sorted order.
// Time Complexity: O(m + n)
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL) return list2;
        else if(list2==NULL) return list1;

        ListNode* dummy = new ListNode(-1);
        ListNode* ddummy = dummy;

        while(list1!=NULL && list2!=NULL) {
            if(list1->val <= list2->val) {
                dummy->next = list1;
                dummy = list1;
                list1 = list1->next;
            }
            else {
                dummy->next = list2;
                dummy = list2;
                list2 = list2->next;
            }
        }
        if(list1) dummy->next = list1;
        else  dummy->next = list2;

        return ddummy->next; 
    }
};

       