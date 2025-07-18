// Problem: 128. Longest Consecutive Sequence
// Link: https://leetcode.com/problems/longest-consecutive-sequence/
// Approach:
//   - Use an unordered_set for fast lookups.
//   - For each number, check if it's the start of a sequence.
//   - If yes, count consecutive numbers.
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

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