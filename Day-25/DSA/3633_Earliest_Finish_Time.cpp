// Problem: 3633. Earliest Finish Time for Land and Water Rides I
// Link: https://leetcode.com/problems/earliest-finish-time-for-land-and-water-rides-i/
// Approach:
//   - Try all combinations where land is taken first then water, and vice versa.
//   - Track the earliest finish time using simulation and greedy logic.
// Time Complexity: O(n * m)
// Space Complexity: O(1)

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int sizels = landStartTime.size();
        int sizews = waterStartTime.size();

        int final_ans = INT8_MAX;
        // if a person first takes land ride than water ride
        for(int i=0; i<sizels; i++) {
            int ans = 0;
            ans = ans+landStartTime[i];
            ans += landDuration[i];
            for(int j=0; j<sizews; j++) {
                if(ans >= waterStartTime[j]) {
                    ans += waterDuration[j];
                }
                else {
                    int diff = waterStartTime[j] - ans;
                    ans += diff;
                    ans += waterDuration[j];
                }
                final_ans = min(final_ans, ans);
                ans = 0;
                ans = ans + landStartTime[i]+landDuration[i];
            }
            ans = 0;
        }

        // if a person first takes water ride than land ride
        for(int i=0; i<sizews; i++) {
            int ans = 0;
            ans = ans + waterStartTime[i];
            ans += waterDuration[i];
            for(int j=0; j<sizels; j++) {
                if(ans >= landStartTime[j]) {
                    ans += landDuration[j];
                }
                else {
                    int diff = landStartTime[j] - ans;
                    ans += diff;
                    ans += landDuration[j];
                }
                final_ans = min(final_ans, ans);
                ans = 0;
                ans = ans + waterStartTime[i]+ waterDuration[i];
            }
            ans = 0;
        }
        return final_ans;
    }
};