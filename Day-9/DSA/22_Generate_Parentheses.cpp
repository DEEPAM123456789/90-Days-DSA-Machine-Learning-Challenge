// Problem: 22. Generate Parentheses
// Link: https://leetcode.com/problems/generate-parentheses/
// Approach:
//   - Use recursion to try adding '(' or ')' based on constraints.
//   - Only add '(' if open brackets used < n
//   - Only add ')' if closed < open
//   - When both open and closed == n, add to result
// Time Complexity: O(2^n) due to recursion
// Space Complexity: O(n) recursion depth

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void getallParenthesis(vector<string> &v, string s, int opb, int csb, int n) {
        if (opb == n && csb == n) {
            v.push_back(s);
            return;
        }

        if (opb < n) getallParenthesis(v, s+'(', opb+1, csb, n);

        if (csb < opb) getallParenthesis(v, s+')', opb, csb+1, n);
        return;
    }

    vector<string> generateParenthesis(int n) {
        vector<string> v;
        string s = "";
        getallParenthesis(v, s, 0, 0, n);
        return v;
    }
};

