// Problem: 15. 3Sum
// Link: https://leetcode.com/problems/3sum/
// Approach:
//   - Sort the array.
//   - Fix the first element in a loop.
//   - Use two pointers (j and k) to find pairs that sum to the negative of the fixed element.
//   - Skip duplicates to avoid repeating triplets.
// Time Complexity: O(n^2)
// Space Complexity: O(no. of triplets in output)

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // METHOD - 1
        set<vector<int>>st;
        int n = nums.size();

        for (int i=0; i<n; i++) {
            set<int>hashset;
            for (int j=i+1; j<n; j++) {
                int third = -(nums[i]+nums[j]);
                if (hashset.find(third) != hashset.end()) {
                    vector<int>temp = {nums[i], nums[j], third};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                hashset.insert(nums[j]);
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
            int j = i+1;
            int k = n-1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum < 0) {
                    j++;
                }

                else if (sum > 0) {
                    k--;
                }
                else {
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j-1]) j++;
                    while (j < k && nums[k] == nums[k+1]) k--;
                }
            }
        }
        return ans;

    }
};