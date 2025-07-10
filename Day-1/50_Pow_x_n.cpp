// Problem: 50. Pow(x, n)
// Link: https://leetcode.com/problems/powx-n/
// Approach:
//   - Use recursion with fast exponentiation to reduce time complexity.
//   - Convert n to long long to handle INT_MIN overflow.
//   - If n is negative, invert x and make power positive.
//   - Recursively compute half power:
//       If power is even: result = half * half
//       If power is odd:  result = half * half * x

// Time Complexity: O(log n)
// Space Complexity: O(log n) due to recursion stack



#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        // Converted n to long long (datatype) to handle INT_MIN 
        long long power = n;
        if (power < 0) {
            x = 1 / x;
            power = -power;
        }
        // Base case
        if (power == 0) return 1.0;
        // Recursive call
        double half = myPow(x, power / 2);
        if (power % 2 == 0) {
            return half * half;
        } else {
            return half * half * x;
        }
    }
};
