// Problem: 48. Rotate Image
// Link: https://leetcode.com/problems/rotate-image/
// Approach:
//   - Transpose the matrix.
//   - Reverse each row to rotate by 90 degrees.
// Time Complexity: O(n^2)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // Transpose
        for (int i=0; i<n; i++) {
            for (int j=i+1; j<n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Reverse each row
        for (int i=0; i<n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
