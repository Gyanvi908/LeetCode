class Solution {
public:
    bool function(int index, int target, vector<int>& nums, vector<vector<int>> &dp){
        if(target == 0)
        return true;

        if(index == 0)
        return nums[0] == target;

        if(dp[index][target] != -1)
        return dp[index][target];


        bool notTaken = function(index-1, target, nums, dp);

        bool taken = false;
        if(nums[index] <=target)
        taken = function(index -1, target-nums[index], nums, dp);

        return dp[index][target] = notTaken || taken;
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int totSum =0;
        for(int i=0; i<n;i++){
            totSum += nums[i];
        }
        if(totSum%2 == 1) return false;

        else{
            int k = totSum/2;
            vector<vector<int>> dp(n, vector<int>(k+1,-1));
            return function(n-1, k, nums, dp);
        }
    }
};