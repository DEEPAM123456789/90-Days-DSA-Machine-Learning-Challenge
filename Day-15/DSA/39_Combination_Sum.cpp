// Problem: 39. Combination Sum
// Link: https://leetcode.com/problems/combination-sum/
// Approach:
//   - Use recursive backtracking to explore all combinations of candidates that sum up to the target.
//   - At each step, try including the current number and continue exploring with the same index (since repetition allowed).
//   - If the target becomes zero, a valid combination is found and added to the answer.
//   - If the target goes negative, backtrack by removing the last added element.
// Time Complexity: O(2^T), where T = target (approximate – exponential due to branching)
// Space Complexity: O(T) – recursion stack depth in the worst case

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void getCombinationSumSub(vector<vector<int>>&ans, vector<int>&v, vector<int>&candidates, int target, int idx) {
        if (target == 0) {
            ans.push_back(v);
            return;
        }

        if (target < 0) return;
        for (int i=idx; i<candidates.size(); i++) {
            v.push_back(candidates[i]);
            getCombinationSumSub(ans, v, candidates, target-candidates[i], i); // i should be passed not 0 to avoid duplicates.
            v.pop_back();
        }
        return;
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int>v;

        getCombinationSumSub(ans, v, candidates, target, 0);
        return ans;
    }
};