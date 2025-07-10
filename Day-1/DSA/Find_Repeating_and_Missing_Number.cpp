// Problem: Find the Repeating and Missing Number
// Link: https://takeuforward.org/plus/dsa/problems/find-the-repeating-and-missing-number
// Approach: 
//   - Use an auxiliary array to detect the duplicate number by checking visited status.
//   - Calculate the expected sum of first n natural numbers.
//   - Subtract the duplicate from the actual sum to find the missing number.
//   - missing = expected_sum - (actual_sum - duplicate)

// Time Complexity: O(n)
// Space Complexity: O(n)

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
            vector<int> ans;
            
            int n = nums.size();
            vector<int> v(n, -1);
            int duplicate = -1;

            for (int i=0; i<n; i++) {
                if (v[nums[i]]==0) duplicate = nums[i];
                else v[nums[i]] = 0;
            }

            int sum_of_n = (n*(n+1))/2;
            int sum_of_nums = 0;
            for (int i=0; i<n; i++) {
                sum_of_nums += nums[i];
            }
            int missing_num = sum_of_n - (sum_of_nums - duplicate);
            ans.push_back(duplicate);
            ans.push_back(missing_num);


            return ans;
    }
};