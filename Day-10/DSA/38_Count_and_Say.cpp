// Problem: 60. Permutation Sequence
// Link: https://leetcode.com/problems/permutation-sequence/
// Approach:
//   - Use math + recursion to directly compute the k-th permutation.
//   - Precompute factorials to determine block size.
//   - Remove used character and recurse on the smaller string.
// Time Complexity: O(n^2), due to repeated substrings.
// Space Complexity: O(n), for recursion depth and final answer string.

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    string helper(string str, int k, string ans) {
        int n = str.length();
        if (n==0) return ans;
        int fact = 1;
        for (int i=2; i<=n-1; i++) {
            fact *= i;
        }
        int idx = k/fact;
        int q=1;
        if (k%fact == 0) {
            idx--;
            q = fact;
        }
        else q = k%fact;
        char ch = str[idx];
        string left = str.substr(0, idx);
        string right = str.substr(idx+1);
        return helper (left+right, q, ans+ch);
    }

    string getPermutation(int n, int k) {
        string str = "";
        for (int i=1; i<=n; i++) {
            str += to_string(i);
        }
        string ans = "";
        return helper(str, k, ans);

    }
};