// Problem: 78. Subsets
// Link: https://leetcode.com/problems/subsets/
// Approach:
//   - Use recursion to generate all possible subsets.
//   - For each index, we have two choices: include or exclude the element.
//   - Base case: if index reaches end, add the current subset to result.
// Time Complexity: O(n * 2^n)
// Space Complexity: O(n) for recursion stack + O(2^n) for storing all subsets

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

// T.C. :- O(n*2^n) 
    void allsubsets(vector<int> &nums, vector<int>&ans, int i, vector<vector<int>> &Allsubsets) {
        if (i == nums.size()) {
            Allsubsets.push_back(ans);
            return;
        }

        ans.push_back(nums[i]);
        allsubsets(nums, ans, i+1, Allsubsets);

        ans.pop_back();
        allsubsets(nums, ans, i+1, Allsubsets);
        return;
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> Allsubsets;
        vector<int>ans;

        allsubsets(nums, ans, 0, Allsubsets);

        return Allsubsets;
    }
};