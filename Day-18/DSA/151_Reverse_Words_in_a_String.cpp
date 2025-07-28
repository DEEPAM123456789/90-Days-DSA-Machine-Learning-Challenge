// Problem: 151. Reverse Words in a String
// Link: https://leetcode.com/problems/reverse-words-in-a-string/
// Approach:
//   - Traverse the string and extract each word by skipping spaces.
//   - Store the non-empty words in a vector.
//   - Reverse the vector of words.
//   - Join the reversed words with a single space between them.
// Time Complexity: O(N), where N is the length of the input string.
// Space Complexity: O(N), due to storage of words in a vector and result string.


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        // Wrong Approach

        // reverse(s.begin(), s.end());

        // vector<int> idx;
        // for (int i=0; i<s.length(); i++) {
        //     if (s[i]==' ') idx.push_back(i);
        // }
        // idx.push_back(s.length());

        // int start = 0;
        // for (int i=0; i<idx.size(); i++) {
        //     int end = idx[i];
        //     reverse(s.begin()+start, s.begin()+end);
        //     start = end+1;
        // }
        // return s;

        vector<string> words;
        int i = 0, n = s.length();

        while (i < n) {
            while (i < n && s[i] == ' ') i++;

            // read word
            string word = "";
            while (i < n && s[i] != ' ') word += s[i++];

            // store non-empty word
            if (!word.empty()) words.push_back(word);
        }

        // reverse the words vector
        reverse(words.begin(), words.end());

        // join with single space
        string result = "";
        for (int i = 0; i < words.size(); i++) {
            result += words[i];
            if (i != words.size() - 1) result += " ";
        }
        return result;
    }
};