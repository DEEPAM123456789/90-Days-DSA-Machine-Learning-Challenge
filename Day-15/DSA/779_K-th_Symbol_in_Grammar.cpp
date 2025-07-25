// Problem: 779. K-th Symbol in Grammar
// Link: https://leetcode.com/problems/k-th-symbol-in-grammar/
// Approach:
//   - The value at (n, k) depends on the value at (n-1, k/2).
//   - If k is even, the value is the flip of previous; if odd, it's the same.
//   - Use recursion to find value at the base case (n=1, k=1) which is 0.
// Time Complexity: O(n) – one recursive call per level
// Space Complexity: O(n) – recursion stack


#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int kthGrammar(int n, int k) {
        if (n==1) return 0;

        if (k%2==0) { // even // flip
            int prevAns = kthGrammar(n-1, k/2);
            if (prevAns == 0) return 1;
            else return 0;
        }
        else { // odd // same
            int prevAns = kthGrammar(n-1, k/2+1);
            return prevAns;
        }
    }
};
