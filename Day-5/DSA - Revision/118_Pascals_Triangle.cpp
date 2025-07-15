// Problem: 118. Pascal's Triangle
// Link: https://leetcode.com/problems/pascals-triangle/
// Approach:
//   - Built each row iteratively using combinatorial formula C(n, k).
//   - Used previous element to compute next to avoid factorials.
// Time Complexity: O(n^2)
// Space Complexity: O(n^2)

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans; 

        for (int i=0; i<numRows; i++) {
            int prev_ele = 1;
            vector<int>v;
            v.push_back(1);
            for (int j=0; j<i; j++) {
                int curr_ele = ((i-j)*prev_ele)/(j+1);
                prev_ele = curr_ele;
                v.push_back(curr_ele);
            }
            ans.push_back(v);
        }

        return ans;

    }
};