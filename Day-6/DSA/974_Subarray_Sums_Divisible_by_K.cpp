// Problem: 974. Subarray Sums Divisible by K
// Link: https://leetcode.com/problems/subarray-sums-divisible-by-k/
// Approach:
//   - Prefix sum modulo k is used as the key in hashmap.
//   - Handle negative modulo by adding k.
//   - Count number of subarrays whose prefix sums modulo k are equal.
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        mpp[0] = 1;  // Important: to handle subarrays starting at index 0
        int sum = 0;
        int count = 0;
        
        for (auto num : nums) {
            sum += num;
            int div = sum % k;
            if (div < 0) div += k;
            if (mpp.find(div) != mpp.end()) {
                count += mpp[div];
            }
            mpp[div]++;
        }
        return count;
    }
};
