// Problem: 53. Maximum Subarray
// Link: https://leetcode.com/problems/maximum-subarray/
// Approach:
//   - Used Kadane's algorithm to track max subarray sum.
//   - Reset running sum if it becomes negative.
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int Maxsum = INT16_MIN;
        int sum = 0;
        int n = nums.size();

        for (int i=0; i<n; i++) {
            sum += nums[i];
            Maxsum = max(sum, Maxsum);
            if (sum < 0) sum = 0;
        }
        return Maxsum;
    }
};