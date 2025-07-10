// Problem: 287. Find the Duplicate Number
// Link:- https://leetcode.com/problems/find-the-duplicate-number/
// Approach: Use an auxiliary array to track visited numbers.
//           Iterate through the input array and mark each number's index in a separate array.
//           If a number is already marked (i.e., visited), it's the duplicate.

// Time Complexity: O(n)
// Space Complexity: O(n)


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();

        int ans = -1;
        vector<int> v(n, -1);
        for (int i=0; i<n; i++) {
            if (v[nums[i]]==0) ans = nums[i];
            else v[nums[i]] = 0;
        }
        return ans;
    }
};

