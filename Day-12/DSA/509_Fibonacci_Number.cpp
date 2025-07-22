// Problem: 509. Fibonacci Number
// Link: https://leetcode.com/problems/fibonacci-number/
// Approach:
//   - Use recursion to calculate Fibonacci number.
//   - Base case is when n == 0 or n == 1.
//   - Otherwise, return fib(n-1) + fib(n-2).
// Time Complexity: O(2^N) – exponential, due to repeated subproblems
// Space Complexity: O(N) – recursion stack


#include<iostream>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if (n==0 || n==1) return n;

        return fib(n-1) + fib(n-2);
    }
};