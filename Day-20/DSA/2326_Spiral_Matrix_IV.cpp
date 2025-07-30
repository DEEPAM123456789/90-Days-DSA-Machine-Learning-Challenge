// Problem: 2326. Spiral Matrix IV
// Link: https://leetcode.com/problems/spiral-matrix-iv/
// Approach:
//   - Create an m x n matrix initialized with -1.
//   - Traverse the matrix in spiral order using boundary markers.
//   - At each step, insert values from the linked list into the matrix.
//   - Stop when the linked list runs out.
// Time Complexity: O(m × n)
// Space Complexity: O(m × n)

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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m, vector<int>(n,-1));

        ListNode* temp = head;
        int minr = 0;
        int maxr = m-1;
        int minc = 0;
        int maxc = n-1;
    
        while(minr<=maxr && minc<=maxc) {
            // right
            for (int j=minc; j<=maxc; j++) {
                if(temp==NULL) return ans;
                ans[minr][j] = temp->val;
                temp = temp->next;
            }
            minr++;

            // down
            for(int i=minr; i<=maxr; i++) {
                if(temp==NULL) return ans;
                ans[i][maxc] = temp->val;
                temp = temp->next;
            }
            maxc--;

            // left
            for(int j=maxc; j>=minc; j--) {
                if(temp==NULL) return ans;
                ans[maxr][j] = temp->val;
                temp = temp->next;
            }
            maxr--;

            // top 
            for(int i=maxr; i>=minr; i--) {
                if(temp == NULL) return ans;
                ans[i][minc] = temp->val;
                temp = temp->next;
            }
            minc++;
        }

        return ans;
    }
};