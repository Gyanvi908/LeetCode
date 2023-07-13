class Solution {
public:
    int function(int index,vector<int>& coins, int amount,vector<vector<int>> &dp){
        if(index == 0){
            if(amount%coins[0] == 0)
            return amount/coins[0];
            else return 1e9;

        }
        if (dp[index][amount] !=-1) return dp[index][amount];

        int notTaken = 0 + function(index -1, coins, amount,dp);
        int taken = 1e9;
        if(coins[index] <= amount)
         taken = 1+ function(index,coins,amount-coins[index], dp);
         return dp[index][amount] = min(notTaken, taken);
         }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>>dp(n, vector<int>(amount+1,-1));
        int ans = function(n-1, coins,amount,dp);
        if(ans>=1e9)return -1;
        return ans;
    }
};