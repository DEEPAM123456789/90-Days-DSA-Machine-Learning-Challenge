// Problem: 1. Two Sum
// Link: https://leetcode.com/problems/two-sum/
// Approach:
//   - Two methods:
//     1. Brute force using two nested loops (O(n^2)).
//     2. Optimized using a hashmap to store visited numbers and their indices (O(n)).
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int>ans;

        // Method - 1
        for (int i=0; i<n-1; i++) {
            for (int j=i+1; j<n; j++) {
                if((nums[i] + nums[j]) == target){
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }

        // Method - 2
        map<int,int>mpp;
        for (int i=0; i<n; i++) {
            int ele = nums[i];
            int more = target - ele;
            auto it = mpp.find(more);
            if (it != mpp.end()) {
                ans.push_back(i);
                ans.push_back(it->second);
            }
            else mpp[ele] = i;
        }

        return ans;
    }
};