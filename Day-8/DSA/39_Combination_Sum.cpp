// Problem: 39. Combination Sum
// Link: https://leetcode.com/problems/combination-sum/
// Approach:
//   - Use recursion with backtracking to try all combinations.
//   - If target == 0, add current combination.
//   - If target < 0, backtrack.
//   - Allow repeated use of elements.
// Time Complexity: O(2^t) where t is target
// Space Complexity: O(k) for recursion stack and O(n) for result

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:

    void CombinationSumI(vector<vector<int>> &ans, vector<int> &v, vector<int> &candidates, int target, int idx) {

        if (target==0) {
            ans.push_back(v);
            return;
        }

        if (target < 0) return;

        for (int i=idx; i<candidates.size(); i++) {
            v.push_back(candidates[i]);
            CombinationSumI(ans, v, candidates, target-candidates[i], i); // i will not be 0 here, to avoid duplicates.
            v.pop_back();
        }
        return;
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        CombinationSumI(ans, v, candidates, target, 0);

        return ans;
    }
};