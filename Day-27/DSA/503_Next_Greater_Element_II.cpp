// Problem: 503. Next Greater Element II
// Link: https://leetcode.com/problems/next-greater-element-ii/
// Approach:
//   - Use a monotonic stack while traversing from right to left twice (simulate circular array).
//   - If the current element is less than stack top, that's the next greater element.
//   - Else keep popping until you find the next greater or stack is empty.
// Time Complexity: O(n)
// Space Complexity: O(n)

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);
        stack<int> st;

        for (int i = 2 * n - 1; i >= 0; i--) {
            while (!st.empty() && st.top() <= nums[i % n]) st.pop();
            if (i < n) {
                if (!st.empty()) ans[i] = st.top();
            }
            st.push(nums[i % n]);
        }

        return ans;
    }
};
