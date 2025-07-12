// Problem: 18. 4Sum
// Link: https://leetcode.com/problems/4sum/
// Approach:
//   - Sort the array.
//   - Use two nested loops to fix the first and second elements.
//   - Use two pointers (k and l) to find the remaining two numbers.
//   - Skip duplicates carefully in all loops.
//   - Handle integer overflow by casting sum to long long.
// Time Complexity: O(n^3)
// Space Complexity: O(no. of quadruplets in output)

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        // METHOD - 1
        int n = nums.size();
        set<vector<int>>st;

        for (int i=0; i<n; i++) {
            for (int j=i+1; j<n; j++) {
                set<int>hashset;
                for (int k=j+1; k<n; k++) {
                    int fourth = target - (nums[i] + nums[j] + nums[k]);
                    if (hashset.find(fourth) != hashset.end()) {
                        vector<int>temp = {nums[i], nums[j], nums[k], fourth};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                    hashset.insert(nums[k]);
                }
            } 
        }
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;

        // METHOD - 2
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for (int i=0; i<n; i++) {
            if (i>0 && nums[i] == nums[i-1]) continue;
            for (int j=i+1; j<n; j++) {
                if (j>i+1 && nums[j]==nums[j-1]) continue;
                int k = j+1;
                int l = n-1;
                while (k < l) {
                    long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];
                    if (sum < target) {
                        k++;
                    }
                    else if (sum > target) {
                        l--;
                    }
                    else {
                        vector<int>temp = {nums[i], nums[j], nums[k], nums[l]};
                        ans.push_back(temp);
                        k++;
                        l--;
                        while (k<l && nums[k] == nums[k-1]) k++;
                        while (k<l && nums[l] == nums[l+1]) l--;
                    }
                }
            }
        }

        return ans;
    }
};