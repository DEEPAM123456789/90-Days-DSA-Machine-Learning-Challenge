// Problem: 90. Subsets II
// Link: https://leetcode.com/problems/subsets-ii/
// Approach:
//   - Sort input to bring duplicates together.
//   - Use recursion/backtracking like subset I.
//   - After backtracking, skip over duplicates using a while loop.
// Time Complexity: O(2^n)
// Space Complexity: O(n) for recursion stack


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    void getallsubsets(vector<vector<int>> &ans, vector<int> &nums, vector<int> &v, int idx) {
        if (idx == nums.size()) {
            ans.push_back({v});
            return;
        }

        int num = nums[idx];
        v.push_back(num);
        getallsubsets(ans, nums, v, idx+1);
        v.pop_back();

        int j = idx+1;
        while(j < nums.size() && nums[j-1] == nums[j]) j++;
        getallsubsets(ans, nums, v, j);

        return;
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int>v;

        getallsubsets(ans, nums, v, 0);
        return ans;
    }
};