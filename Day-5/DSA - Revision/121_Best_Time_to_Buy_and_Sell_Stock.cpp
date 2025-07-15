// Problem: 121. Best Time to Buy and Sell Stock
// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Approach:
//   - Track minimum price seen so far.
//   - For each price, calculate profit = current - min.
//   - Update max profit.
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int n = prices.size();
        int min = INT16_MAX;

        for (int i=0; i<n; i++) {
            int sell = prices[i] - min;
            if (sell < 0) min = prices[i];
            else maxProfit = max(sell, maxProfit);
        }
        return maxProfit;

    }
};