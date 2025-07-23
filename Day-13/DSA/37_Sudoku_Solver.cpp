// Problem: 37. Sudoku Solver
// Link: https://leetcode.com/problems/sudoku-solver/
// Approach:
//   - Use backtracking to try filling empty cells with digits 1-9.
//   - Before placing, ensure the digit isn't already present in the same row, column, or 3x3 grid.
//   - If a valid placement leads to a dead end later, backtrack.
// Time Complexity: O(9^(n*n)), worst-case (not all cells empty in real scenarios)
// Space Complexity: O(1), in-place


#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

    bool canPlace(vector<vector<char>> &board, int r, int c, int num) {

        // row check
        for (int i=0; i<9; i++) {
            if(board[r][i] - '0' == num) return false;
        }

        // col check
        for (int i=0; i<9; i++) {
            if(board[i][c] - '0' == num) return false;
        }

        // box check
        int x = (r/3)*3;
        int y = (c/3)*3;

        for (int i=x; i<x+3; i++) {
            for(int j=y; j<y+3; j++) {
                if (board[i][j] - '0' == num) return false;
            }
        }
        return true;
    }

    bool f(vector<vector<char>> &board, int r, int c) {
        if (r==9) return true;
        if (c==9) return f(board, r+1, 0);
        if (board[r][c] != '.') return f(board, r, c+1);

        if(board[r][c] == '.') {
            for (int j=1; j<=9; j++) {
                if(canPlace(board, r, c, j)) {
                    board[r][c] = '0' + j;
                    bool retval = f(board, r, c+1);
                
                    if(retval) return true;
                    board[r][c] = '.';
                }
            }
        } 
        return false;
     }

    void solveSudoku(vector<vector<char>>& board) {
        f(board, 0, 0);
    }
};