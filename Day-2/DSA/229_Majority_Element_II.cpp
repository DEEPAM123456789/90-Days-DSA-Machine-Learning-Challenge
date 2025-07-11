// Problem: 229. Majority Element II
// Link: https://leetcode.com/problems/majority-element-ii/
// Approach:
//   - Count the frequency of each element using a map.
//   - Elements appearing more than ⌊n/3⌋ times are added to the result.
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>
#include <vector>
#include <map>
using namespace std; 

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int, int>mpp;

        vector<int> ans;
        for (int i=0; i<n; i++){
            mpp[nums[i]]++;
        }

        for (auto it : mpp) {
            if(it.second > n/3) ans.push_back(it.first);
        }
        return ans;
    }
};