// Problem: 14. Longest Common Prefix
// Link: https://leetcode.com/problems/longest-common-prefix/
// Approach:
//   - Sort the array of strings so that the most different strings (lexicographically) are first and last.
//   - The common prefix must be common between the first and last strings only.
//   - Compare characters from both strings until a mismatch occurs.
// Time Complexity: O(NlogN + M), where N is the number of strings, M is the length of the shortest string.
// Space Complexity: O(1)

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int n = strs.size();
        if (n==1) return strs[0];

        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs[n-1];
        int min_len = min(first.size(), last.size());

        for (int i=0; i<min_len; i++) {
            if (first[i] == last[i]) {
                ans += first[i];
            }
            else return ans;
        } 
        return ans;
    }
};