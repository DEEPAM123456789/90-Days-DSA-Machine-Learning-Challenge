// Problem: 496. Next Greater Element I
// Link: https://leetcode.com/problems/next-greater-element-i/
// Approach:
//   - For each element in nums1, find its index in nums2.
//   - From that index, find the next greater element.
//   - If not found, return -1 for that element.
// Time Complexity: O(n1 * n2)
// Space Complexity: O(n1)

#include<iostream>
#include<vector>
#include<stack>
using namespace std;


class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> ans;

        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < n2; j++) {
                if (nums1[i] == nums2[j]) {
                    bool flag = false;
                    for (int k = j + 1; k < n2; k++) {
                        if (nums2[k] > nums2[j]) {
                            ans.push_back(nums2[k]);
                            flag = true;
                            break;
                        }
                    }
                    if (!flag) ans.push_back(-1);
                }
            }
        }
        return ans;
    }
};
