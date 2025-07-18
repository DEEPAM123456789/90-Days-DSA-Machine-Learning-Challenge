// Problem: 779. K-th Symbol in Grammar
// Link: https://leetcode.com/problems/k-th-symbol-in-grammar/
// Approach:
//   - Recursively go to previous row to find the value.
//   - Use the rule: if k is even, flip value of (k/2); else take same value as (k/2 + 1)
// Time Complexity: O(n)
// Space Complexity: O(n) due to recursion

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int kthGrammar(int n, int k) {
        if (n==1) return 0;

        if (k%2==0) { // flip, k/2
            int prevAns = kthGrammar(n-1, k/2);
            if (prevAns == 0) return 1;
            else return 0;
        }
        else { // odd // same
            int prevAns = kthGrammar(n-1, k/2 + 1);
            return prevAns;
        }
    }
};