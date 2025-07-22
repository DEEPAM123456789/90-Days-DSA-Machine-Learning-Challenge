// Problem: 51. N-Queens
// Link: https://leetcode.com/problems/n-queens/
// Approach:
//   - Use backtracking to try placing a queen in each row.
//   - For each position, check if it's safe by scanning the column,
//     left diagonal, and right diagonal.
//   - If safe, place the queen and move to the next row.
//   - Backtrack by removing the queen and trying the next column.
// Time Complexity: O(N!) – due to placing N queens in N rows with backtracking
// Space Complexity: O(N²) – for storing the board and result

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

vector<vector<char>> grid;
vector<vector<string>>result;

    bool canPlaceQueen(int row, int col, int n) {
        // column check
        for (int i = row-1; i>=0; i--) {
            if (grid[i][col] == 'Q') return false;
        }

        // left diag check
        for (int i=row-1, j=col-1; i>=0 and j>=0; i--,j--) {
            if (grid[i][j] == 'Q') return false;
        }

        // right diag check
        for (int i=row-1, j=col+1; i>=0 and j<n; i--,j++) {
            if(grid[i][j] == 'Q') return false;
        }

        return true;
    }

    void f(int row, int n) {
        if (row == n) {
            vector<string>temp;
            for (int i=0; i<n; i++) {
                string res = "";
                for (int j=0; j<n; j++) {
                    res += grid[i][j];
                }
                temp.push_back(res);
            }
            result.push_back(temp);
            return;
        }

        for (int col=0; col<n; col++) {
            if (canPlaceQueen(row, col, n)) {
                grid[row][col] = 'Q';
                f(row+1, n);
                grid[row][col] = '.';
            }
        }

    }


    vector<vector<string>> solveNQueens(int n) {
        grid.clear();
        result.clear();
        grid.resize(n, vector<char>(n, '.'));
        f(0, n);
        return result;
    }
};