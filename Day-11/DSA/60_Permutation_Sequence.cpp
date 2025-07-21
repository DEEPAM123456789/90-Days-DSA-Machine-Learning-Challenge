// Problem: 60. Permutation Sequence
// Link: https://leetcode.com/problems/permutation-sequence/
// Approach:
//   - Create a string containing numbers from 1 to n.
//   - Use recursion to find the k-th permutation based on factorial mathematics.
//   - At each step, divide k by (n-1)! to find the appropriate index.
// Time Complexity: O(n^2) – due to string construction and recursion.
// Space Complexity: O(n) – recursion stack + string manipulation.

#include<iostream>
#include<string>
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