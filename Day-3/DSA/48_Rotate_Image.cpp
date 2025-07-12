// Problem: 48. Rotate Image
// Link: https://leetcode.com/problems/rotate-image/
// Approach:
//   - Transpose the matrix (swap elements across the diagonal).
//   - Reverse each row to achieve a 90-degree rotation.
// Time Complexity: O(n^2)
// Space Complexity: O(1) (in-place)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // tranpose the matrix
        int n = matrix.size();
        for (int i=0; i<n; i++) {
            for (int j=i+1; j<n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // reverse row-wise vectors
        for (int i=0; i<matrix.size(); i++) reverse(matrix[i].begin(), matrix[i].end());

        return;
    }
};
