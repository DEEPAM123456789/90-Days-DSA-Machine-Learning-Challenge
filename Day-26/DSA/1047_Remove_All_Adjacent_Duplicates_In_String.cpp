
// Problem: 1047. Remove All Adjacent Duplicates In String
// Link: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
// Approach:
//   - Use a stack to track characters.
//   - If top of stack matches current character, pop it (duplicate).
//   - Else, push it.
//   - At end, reverse stack to get the answer.
// Time Complexity: O(n)
// Space Complexity: O(n)

#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        stack<char> st;

        for (char c : s) {
            if (!st.empty()) {
                if (st.top() == c) st.pop();
                else st.push(c);
            } else {
                st.push(c);
            }
        }

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
