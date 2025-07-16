// Problem: 930. Binary Subarrays With Sum
// Link: https://leetcode.com/problems/binary-subarrays-with-sum/
// Approach:
//   - Same prefix sum + hashmap idea.
//   - Sum counts how many 1's have been seen so far.
//   - For each index, check if (prefix_sum - goal) exists in the map.
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> mpp;
        int n = nums.size();
        int sum = 0;
        int count = 0;
        mpp[0] = 1;
        for (auto num: nums) {
            sum += num;
            if (mpp.find(sum-goal) != mpp.end()) {
                count += mpp[sum-goal];
            }
            mpp[sum]++;
        }
        return count;
    }
};