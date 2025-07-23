// Problem: 40. Combination Sum II
// Link: https://leetcode.com/problems/combination-sum-ii/
// Approach:
//   - Use recursion + backtracking to try each number.
//   - Sort the array to skip duplicates effectively.
//   - If target becomes 0, store the current combination.
// Time Complexity: O(2^n), exponential in worst-case
// Space Complexity: O(k), where k is current combination size in recursion

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> result; // global

    void getCombinationSum(vector<int> &candidates, int target, int idx, vector<int> &subset) {
        if (target == 0) {
            result.push_back(subset);
            return;
        }
        if (idx == candidates.size()) return;
        if(candidates[idx] <= target) {
            subset.push_back(candidates[idx]);
            getCombinationSum(candidates, target-candidates[idx], idx+1, subset);
            subset.pop_back();
        }

        // avoid
        int j = idx+1;
        while(j<candidates.size() && candidates[j] == candidates[j-1]) j++;

        getCombinationSum(candidates, target, j, subset);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        result.clear();
        vector<int> subset;
        getCombinationSum(candidates, target, 0, subset);
        return result;
    }
};