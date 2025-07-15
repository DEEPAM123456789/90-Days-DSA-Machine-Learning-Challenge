// Problem: 75. Sort Colors
// Link: https://leetcode.com/problems/sort-colors/
// Approach:
//   - Count occurrences of 0, 1, 2 separately.
//   - Overwrite array with correct counts.
// Time Complexity: O(n)
// Space Complexity: O(1)


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();

        int count0 = 0;
        for (int i=0; i<n; i++) {
            if(nums[i] == 0) count0++;
        }

        int count1 = 0;
        for (int i=0; i<n; i++) {
            if(nums[i] == 1) count1++;
        }

        int count2 = 0;
        for (int i=0; i<n; i++) {
            if(nums[i] == 2) count2++;
        }

        for (int i=0; i<count0; i++) nums[i] = 0;

        for (int i=count0; i<(count0+count1); i++) nums[i] = 1;

        for (int i=count0+count1; i<n; i++) nums[i] = 2;
        return;
        
    }
};