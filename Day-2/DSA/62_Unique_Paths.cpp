// Problem: 62. Unique Paths
// Link: https://leetcode.com/problems/unique-paths/
// Approach:
//   - Mathematical combinatorics solution: C(m+n−2, m−1).
//   - Optimized the computation by using a loop to avoid overflow and factorials.
// Time Complexity: O(min(m, n))
// Space Complexity: O(1)

#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    
    int uniquePaths(int m, int n) {
        
        int N = m + n - 2;
        int k = min(m-1, n-1); // Choose the smaller k for efficiency
        long long res = 1;
        for (int i = 1; i <= k; ++i) {
            res = res * (N - k + i) / i;
        }
        return (int)res;

    }
};