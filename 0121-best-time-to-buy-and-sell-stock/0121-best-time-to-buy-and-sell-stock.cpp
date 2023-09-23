class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maximumProfit = 0; // if at the same time thry are buying and selling the stock

        int minPrice = INT_MAX;

        for(int i=0;i<prices.size();i++){   // i=1 --> if we buy and sell at prices[0] the profit would be 0
        int currProfit = prices[i]  - minPrice;
        maximumProfit  = max(currProfit, maximumProfit);
        minPrice = min(minPrice, prices[i]);
        }
     return maximumProfit;
    }
};