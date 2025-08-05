// Problem: 20. Valid Parentheses
// Link: https://leetcode.com/problems/valid-parentheses/
// Approach:
//   - Use a stack to store opening brackets.
//   - On encountering a closing bracket, check if it matches the top of the stack.
//   - If yes, pop the stack; else return false.
//   - At the end, stack must be empty for valid parentheses.
// Time Complexity: O(n)
// Space Complexity: O(n)

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if (s.length() % 2 != 0) return false;

        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') st.push(c);
            else {
                if (st.empty()) return false;
                char top = st.top();
                if ((top == '(' && c == ')') || 
                    (top == '[' && c == ']') || 
                    (top == '{' && c == '}')) st.pop();
                else return false;
            }
        }

        return st.empty();
    }
};
