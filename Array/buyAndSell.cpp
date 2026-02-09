/*Best Time to Buy and Sell Stock:
Given an array of stock prices where each element represents the price on a given day, find the maximum profit possible by buying once and selling once in the future. If no profit can be made, return 0.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0, bestBuy = prices[0];

        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] > bestBuy) {
                maxProfit = max(maxProfit, prices[i] - bestBuy);
            }
            bestBuy = min(bestBuy, prices[i]);
        }

        return maxProfit;
    }
};

int main() {
    Solution obj;

    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << "Maximum Profit: " << obj.maxProfit(prices) << endl;

    return 0;
}
