// Problem: 567. Permutation in String
// Link: https://leetcode.com/problems/permutation-in-string/
// Approach:
//   - Use frequency vectors of size 26 (for lowercase letters).
//   - Compare frequency of s1 with every substring of s2 of size s1.
//   - Use sliding window to optimize checking.
// Time Complexity: O(n) – where n is the length of s2.
// Space Complexity: O(1) – constant space due to fixed 26-length vectors.

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();

        if (n > m) return false;

        vector<int>count1(26, 0);
        vector<int>count2(26, 0);

        for (char ch: s1) count1[ch - 'a']++;
        
        for (int i=0; i<n; i++) count2[s2[i] - 'a']++;

        if (count1 == count2) return true;

        for (int i=n; i<m; i++) {

            count2[s2[i-n] - 'a']--;
            count2[s2[i] - 'a']++; 
            if (count1 == count2) return true;
        }
        return false;
    }
};