// Problem: 78. Subsets
// Link: https://leetcode.com/problems/subsets/
// Approach:
//   - Use recursion/backtracking to explore all combinations.
//   - At each index, decide whether to include the current number or not.
//   - Add subset to result when index == nums.size()
// Time Complexity: O(2^n)
// Space Complexity: O(n) for recursion stack


#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void getallsubsets(vector<vector<int>> &ans, vector<int> &nums, vector<int> &v, int idx) {
        if (idx == nums.size()) {
            ans.push_back(v);
            return;
        }

        int num = nums[idx];
        v.push_back(num);
        getallsubsets(ans, nums, v, idx+1);
        v.pop_back();

        getallsubsets(ans, nums, v, idx+1);
        return;

    }
    

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> v;

        getallsubsets(ans, nums, v, 0);
        return ans;
    }
};