// Problem: 74. Search a 2D Matrix
// Link: https://leetcode.com/problems/search-a-2d-matrix/
// Approach:
//   - Iterate through each row to check if the last element is >= target.
//   - If so, linearly search that row for the target.
//   - Use a flag variable to mark if the target was found.

// Time Complexity: O(n * m) in the worst case (linear search in each row)
// Space Complexity: O(1)


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        bool flag = false;

        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                if (matrix[i][m-1] >= target){
                     if (matrix[i][j] == target) flag = true;
                }
                else break;
            }
        }
        return flag;
    }
};