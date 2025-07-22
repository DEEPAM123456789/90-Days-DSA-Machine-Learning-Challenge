// Problem: 326. Power of Three
// Link: https://leetcode.com/problems/power-of-three/
// Approach:
//   - Use recursion to divide the number by 3.
//   - Base case is when n == 1.
//   - If n is less than 1 or not divisible by 3, return false.
// Time Complexity: O(logN)
// Space Complexity: O(logN) – recursion stack

#include<iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n == 1) return true;
        if (n < 1 || n%3 != 0) return false;

        return isPowerOfThree(n/3);
    }
};