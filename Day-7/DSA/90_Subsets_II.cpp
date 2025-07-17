// Problem: 90. Subsets II
// Link: https://leetcode.com/problems/subsets-ii/
// Approach:
//   - Sort the array to bring duplicates together.
//   - Use recursion similar to Subsets I.
//   - After excluding a number, skip all its duplicates to avoid duplicate subsets.
// Time Complexity: O(n * 2^n)
// Space Complexity: O(n) for recursion + O(2^n) for storing all unique subsets

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void getallsubsets (vector<int> &nums, vector<int> &ans, int i, vector<vector<int>> &Allsubsets) {
        if (i == nums.size()) {
            Allsubsets.push_back(ans);
            return;
        }

        ans.push_back(nums[i]);
        getallsubsets(nums, ans, i+1, Allsubsets);
        ans.pop_back();
        int idx = i+1;
        while (idx < nums.size() && nums[idx] == nums[idx-1]) idx++;
        getallsubsets(nums, ans, idx, Allsubsets);
        return;
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> Allsubsets;
        vector<int> ans;

        getallsubsets(nums, ans, 0, Allsubsets);
        return Allsubsets;
    }
};