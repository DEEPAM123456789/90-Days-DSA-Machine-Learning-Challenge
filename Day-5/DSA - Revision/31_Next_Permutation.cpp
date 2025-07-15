// Problem: 31. Next Permutation
// Link: https://leetcode.com/problems/next-permutation/
// Approach:
//   - Find the first index 'i' where nums[i] < nums[i+1] from the right.
//   - Swap it with the next greater element from the end.
//   - Reverse the suffix to get the next permutation.
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx = -1;
        if (n==0) return;

        for (int i=n-1; i>0; i--) {
            if (nums[i-1] < nums[i]) {
                idx = i-1;
                break;
            }
        } 
        if (idx == -1) {
            sort(nums.begin(), nums.end());
            return;
        }

        for (int i=n-1; i>idx; i--) {
            if (nums[i] > nums[idx] ) {
                swap(nums[idx], nums[i]);
                break;
            }
        }

        reverse(nums.begin()+idx+1, nums.end());
        return;
    }
};