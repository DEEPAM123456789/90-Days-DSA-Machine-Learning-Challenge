// Problem: 38. Count and Say
// Link: https://leetcode.com/problems/count-and-say/
// Approach:
//   - Use recursion to generate the previous term.
//   - Iterate over the string and count occurrences of each digit.
//   - Construct the string by saying the count followed by the digit.
// Time Complexity: O(n * m), where m is the length of the previous string.
// Space Complexity: O(n * m), due to recursion and string construction.

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        if (n==1) return "1";
        string str = countAndSay(n-1);
        string ztr = "";

        int freq = 1;
        char ch = str[0];
        for (int i=1; i<str.length(); i++) {
            char dh = str[i];
            if (ch == dh) {
                freq++;
            }
            else {
                ztr += (to_string(freq) + ch);
                freq = 1;
                ch = str[i];
            }
        }
        ztr += (to_string(freq) + ch);
        return ztr;
    }
};