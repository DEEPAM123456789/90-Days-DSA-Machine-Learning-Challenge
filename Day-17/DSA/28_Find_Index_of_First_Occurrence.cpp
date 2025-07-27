// Problem: 28. Find the Index of the First Occurrence in a String
// Link: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
// Approach:
//   - Use a naive string matching algorithm.
//   - Slide over the `haystack` and for each position, compare substring with `needle`.
//   - Return index if a full match is found.
// Time Complexity: O((N - M + 1) × M), where N is the length of `haystack`, M is the length of `needle`.
// Space Complexity: O(1)


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {

        int m = needle.length();
        int n = haystack.length();

        if(m>n) return -1;

        for (int i=0; i<=n-m; i++){
            int j=0;
            while(j<m && haystack[i+j] == needle[j]) j++;
            
            if(j==m) return i;
        }
        return -1;
    }
};