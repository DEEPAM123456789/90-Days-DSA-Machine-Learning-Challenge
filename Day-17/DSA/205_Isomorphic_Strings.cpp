// Problem: 205. Isomorphic Strings
// Link: https://leetcode.com/problems/isomorphic-strings/
// Approach:
//   - Use a fixed-size vector to map characters from string `s` to string `t` based on the difference in ASCII values.
//   - Traverse both strings and ensure consistent mapping of characters from `s` to `t` and vice versa.
//   - If mismatch in mapping occurs in either direction, return false.
// Time Complexity: O(N), where N is the length of the string.
// Space Complexity: O(1) – constant space due to fixed 150-length vector used twice.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) return false;

        vector<int> v(150, 1000);
        for (int i=0; i<s.length(); i++) {
            int idx = (int)s[i];
            if(v[idx]==1000) v[idx] = s[i]-t[i];
            else if(v[idx] != s[i]-t[i]) return false;
        }

        // empyting the vector v
        for (int i=0; i<150; i++) v[i] = 1000;

        for (int i=0; i<t.length(); i++) {
            int idx = (int)t[i];
            if(v[idx]==1000) v[idx] = t[i]-s[i];
            else if(v[idx] != t[i]-s[i]) return false;
        }   
        return true;     
    }
};