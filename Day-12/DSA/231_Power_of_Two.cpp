// Problem: 231. Power of Two
// Link: https://leetcode.com/problems/power-of-two/
// Approach:
//   - Use recursion to divide the number by 2.
//   - Base case is when n == 1.
//   - If n is less than 1 or not divisible by 2, return false.
// Time Complexity: O(logN)
// Space Complexity: O(logN) – recursion stack

#include<iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n==1) return true;
        if(n<1 || n%2 != 0) return false;

        return isPowerOfTwo(n/2);
    }
};