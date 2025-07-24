// Problem: 2596. Check Knight Tour Configuration
// Link: https://leetcode.com/problems/check-knight-tour-configuration/
// Approach:
//   - Use DFS to simulate the knight's moves.
//   - Start from grid[0][0] and recursively move to the next cell
//     that contains current+1 in the knight's move direction.
//   - If all cells are visited in correct order, return true.
// Time Complexity: O(N^2) for scanning each cell
// Space Complexity: O(N^2) for recursion stack (worst-case)

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

    vector<int> dx = {-2, -1, 1, 2, 2, 1, -1, -2};
    vector<int> dy = {1, 2, 2, 1, -1, -2, -2, -1};
    
    bool isItSafe(int i, int j, int n) {
        return i>=0 and j>=0 and i<n and j<n;
    }

    bool f(vector<vector<int>> &grid, int i, int j,int count, int n) {
        if (count == n*n-1) return true;

        for (int k=0; k<8; k++) {
            int ni = i + dx[k];
            int nj = j + dy[k];
            if(isItSafe(ni, nj, n) && grid[ni][nj] == count + 1) {
                if (f(grid, ni, nj, count+1, n)) return true;
            }
        }
        return false;
    }

    bool checkValidGrid(vector<vector<int>>& grid) {
        int n = grid.size();

        if (grid[0][0]!= 0) return false;

        return f(grid, 0, 0, 0, n);

    }
};