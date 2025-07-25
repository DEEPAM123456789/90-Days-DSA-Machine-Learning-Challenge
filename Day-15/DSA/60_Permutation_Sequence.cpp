// Problem: 60. Permutation Sequence
// Link: https://leetcode.com/problems/permutation-sequence/
// Approach:
//   - Convert the problem into the factorial number system.
//   - Fix the position of each digit one by one by calculating the index using (k / fact).
//   - Remove the chosen digit and reduce the problem size recursively.
//   - Continue until the string is constructed.
// Time Complexity: O(n^2) – due to substring manipulation inside recursion
// Space Complexity: O(n) – due to recursion and answer construction

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    string helper(string s, string ans, int k) {
        int n = s.length();
        if (n==0) return ans;

        int fact=1;
        for (int i=2; i<=n-1; i++) {
            fact *=i;
        }
        int idx = k/fact;
        int q=1;
        if (k%fact==0) {
            idx--;
            q=fact;
        } 
        else q=k%fact;

        char ch = s[idx];
        string left = s.substr(0, idx);
        string right = s.substr(idx+1);
        return helper(left+right, ans+ch, q);
    }

    string getPermutation(int n, int k) {
        string s = "";
        for (int i=1; i<=n; i++) {
            s += to_string(i);
        }
        string ans = "";
        return helper(s, ans, k);
    }
};

