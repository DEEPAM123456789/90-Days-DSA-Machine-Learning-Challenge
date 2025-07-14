// Problem: 128. Longest Consecutive Sequence
// Link: https://leetcode.com/problems/longest-consecutive-sequence/
// Approach 1 (commented): Sort array and count streaks.
// Approach 2 (used): 
//   - Insert all elements into an unordered_set for O(1) lookup.
//   - For each element, check if it's the start of a sequence.
//   - Count the streak forward.
// Time Complexity: O(n)
// Space Complexity: O(n)


#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        // Method - 1
        sort(nums.begin(), nums.end());
        int n = nums.size();

        if (n == 0) return 0;
        if (n == 1) return 1;

        int cnt1 = 1;
        int cnt2 = 1;


        for (int i=0; i<n-1; i++) {
            if (nums[i+1] - nums[i] == 1) {
                cnt1++;
            }
            else if (nums[i] != nums[i+1])
             {
                 cnt2 = max(cnt2, cnt1);
                 cnt1 = 1;
            }
        }
        cnt2 = max(cnt2, cnt1);
        return cnt2;

        // Method - 2
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longest = 0;

        for (int num : numSet) {
            if (numSet.find(num - 1) == numSet.end()) {
                int currentNum = num;
                int streak = 1;

                while (numSet.find(currentNum + 1) != numSet.end()) {
                    currentNum++;
                    streak++;
                }

                longest = max(longest, streak);
            }
        }
        return longest;
    }
};