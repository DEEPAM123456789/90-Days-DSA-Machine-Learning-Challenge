// Problem: 169. Majority Element
// Link: https://leetcode.com/problems/majority-element/
// Approach:
//   - Used Moore’s Voting Algorithm to find a potential majority element.
//   - Then verified if the candidate actually appears more than ⌊n/2⌋ times.
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std; 

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // most optimal approach 

        // Moore's Voting Algorithm
        int ele;
        int cnt = 0;
        int n = nums.size();
        int ans = -1;

        for (int i=0; i<n; i++) {
            if (cnt == 0) {
                cnt = 1;
                ele = nums[i];
            }

            else if (nums[i] == ele) cnt++;
            else cnt--;
        }

        int cnt1 = 0;
        for (int i=0; i<n; i++) {
            if (ele == nums[i]) cnt1++;
        }
        if(cnt1 > n/2) ans = ele;

        return ans;
    }
};