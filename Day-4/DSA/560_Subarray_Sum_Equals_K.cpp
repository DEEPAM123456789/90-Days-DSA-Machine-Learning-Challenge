// Problem: 560. Subarray Sum Equals K
// Link: https://leetcode.com/problems/subarray-sum-equals-k/
// Approach:
//   - Use prefix sum and hashmap to track the number of times a prefix sum occurs.
//   - For each index, check if (currentSum - k) exists in the map.
// Time Complexity: O(n)
// Space Complexity: O(n)


#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

    unordered_map<int, int> prefixCount;
    prefixCount[0] = 1;
    int sum = 0, count = 0;

    for (auto num : nums) {
        sum += num;

        if (prefixCount.count(sum - k)) {
            count += prefixCount[sum - k];
        }
        prefixCount[sum]++;

    }
    return count;

    } 
};