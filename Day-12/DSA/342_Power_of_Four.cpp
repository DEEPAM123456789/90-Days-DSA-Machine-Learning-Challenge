// Problem: 342. Power of Four
// Link: https://leetcode.com/problems/power-of-four/
// Approach:
//   - Recursively divide the number by 4.
//   - Base case is when n == 1.
//   - If n is less than 1 or not divisible by 4, return false.
// Time Complexity: O(logN)
// Space Complexity: O(logN)


#include<iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n==1) return true;
        if (n<1 || n%4 != 0) return false;

        return isPowerOfFour(n/4);
    }
};