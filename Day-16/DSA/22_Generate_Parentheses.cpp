// Problem: 22. Generate Parentheses
// Link: https://leetcode.com/problems/generate-parentheses/
// Approach:
//   - Use recursive backtracking to generate all combinations of well-formed parentheses.
//   - Keep track of the count of open and close brackets added so far.
//   - Add an open bracket if we haven't added all `n` open brackets.
//   - Add a close bracket only if the number of close brackets is less than open brackets.
//   - When both counts reach `n`, we have a valid combination.
// Time Complexity: O(2^n) – exponential due to branching
// Space Complexity: O(n) – depth of recursion and string construction

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void getParenthesis(vector<string> &ans, string s, int n, int opb, int csb) {
        if (opb == n && csb == n) {
            ans.push_back(s);
            return;
        }

        if (opb < n) getParenthesis(ans, s+'(', n, opb+1, csb);

        if (csb < opb) getParenthesis(ans, s+')', n, opb, csb+1);
        return;
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s = "";

        getParenthesis(ans, s, n, 0, 0);
        return ans;
    }
};