// Problem: 73. Set Matrix Zeroes
// Link: https://leetcode.com/problems/set-matrix-zeroes/
// Approach:
//   - Tried multiple methods:
//     1. Brute force: storing zero positions separately.
//     2. Using row and column marker arrays.
//     3. Optimized in-place marking using first row/column as flags.
// Time Complexity: O(n*m)
// Space Complexity: O(1) (in-place, ignoring input matrix)

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        // Method - 1
        vector<int> ans;
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                if (matrix[i][j]==0) {
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        if (ans.empty()) return;
        

        for (int k = 0; k < ans.size(); k += 2) {
            int row = ans[k];
            int col = ans[k+1];

            // Printing zero in row
            for (int j=0; j<m; j++) matrix[row][j] = 0;

            // printing zero in col
            for (int i=0; i<n; i++) matrix[i][col] = 0;
     }

        return;

    // Method - 2
    vector<int>row(n, 0);
    vector<int>col(m, 0);

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (matrix[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    // Print 0 according to row vector
    for (int i=0; i<n; i++) {
        if (row[i] == 1) {
            for (int j=0; j<m; j++) {
                matrix[i][j] = 0;
            }
        }
    }

    // Print 0 according to col vector
    for (int j=0; j<m; j++) {
        if (col[j] == 1) {
            for (int i=0; i<n; i++) {
                matrix[i][j] = 0;
            }
        }
    }

    // Method - 3
    int col0 = 1;

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                if (j!= 0) {
                matrix[0][j] = 0;
                }
                else col0 = 0;
            }
        }
    }
    
    // Printing zero
    for (int i=1; i<n; i++) {
        for (int j=1; j<m; j++) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) matrix[i][j] = 0;
        }
    }

    if (matrix[0][0] == 0) {
        for (int j=0; j<m; j++) matrix[0][j] = 0;
    }
    if (col0 == 0) {
        for (int i=0; i<n; i++) matrix[i][0] = 0;
    }

    }  
};

