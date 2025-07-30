// Problem: 59. Spiral Matrix II
// Link: https://leetcode.com/problems/spiral-matrix-ii/
// Approach:
//   - Create an empty n x n matrix.
//   - Use four boundaries: minr, maxr, minc, maxc to control the spiral direction.
//   - Fill the matrix while counting from 1 to n².
//   - Update boundaries after each direction (right, down, left, up).
// Time Complexity: O(n²)
// Space Complexity: O(n²)

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
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n ,vector<int>(n));
        int minr = 0;
        int maxr = n-1; 
        int minc = 0;
        int maxc = n-1;
        int count = 1;

        while(count <= n*n) {
            // right
            if(minr>maxr || minc>maxc) break;
            for(int j=minc; j<=maxc; j++) {
                ans[minr][j] = count;
                count++;
            }
            minr++;

            // down
            if(minr>maxr || minc>maxc) break;
            for(int i=minr; i<=maxr; i++) {
                ans[i][maxc] = count;
                count++;
            }
            maxc--;

            // left
            if(minr>maxr || minc>maxc) break;
            for(int j=maxc; j>=minc; j--) {
                ans[maxr][j] = count;
                count++;
            }
            maxr--;

            // top
            if(minr>maxr || minc>maxc) break;
            for(int i=maxr; i>=minr; i--) {
                ans[i][minc] = count;
                count++;
            }
            minc++;
            if(minr>maxr || minc>maxc) break;
        }
        return ans;
    }
};