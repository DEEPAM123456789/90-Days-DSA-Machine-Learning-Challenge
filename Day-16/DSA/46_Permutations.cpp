// Problem: 46. Permutations
// Link: https://leetcode.com/problems/permutations/
// Approach:
//   - Use recursive backtracking to generate all permutations of the input list.
//   - For each position, try placing each remaining number, and recurse on the reduced list.
//   - Track current permutation in a vector and when complete, add it to the result.
//   - Backtrack by removing the last inserted element to explore other possibilities.
// Time Complexity: O(n × n!) – n! permutations, and copying each takes O(n)
// Space Complexity: O(n) – recursion stack depth


#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void getpermutation(vector<vector<int>> &ans, vector<int> &v, vector<int> &nums) {
        if (nums.size()==0) {
            ans.push_back(v);
            return;
        }

        for (int i=0; i<nums.size(); i++) {
            int num = nums[i];
            v.push_back(num);
            vector<int> left(nums.begin(), nums.begin()+i);
            vector<int> right(nums.begin()+i+1, nums.end());
            left.insert(left.end(), right.begin(), right.end());
            getpermutation(ans, v, left);
            v.pop_back();
        }
        return;
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>v;
        getpermutation(ans, v, nums);
        return ans;
    }
};
