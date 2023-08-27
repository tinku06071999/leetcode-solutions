class Solution {
public:
    int solve(vector<int>& coins, int amount, int idx, vector<vector<int>> &dp){
        if(idx<0 || amount<0)return 1e8;
        if(amount==0)return 0;
        if(dp[idx][amount] != -1)return dp[idx][amount];
        int pick = 1+solve(coins,amount-coins[idx],idx,dp);
        int not_pick = solve(coins,amount,idx-1,dp);
        return dp[idx][amount] = min(pick,not_pick);   
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
        if(solve(coins,amount,coins.size()-1,dp)>=1e8)return -1;
        return solve(coins,amount,coins.size()-1,dp);
        int n = coins.size();
        for(int i=0;i<n+1;i++){
            for(int j=0;j<amount+1;j++){
                 if (i == 0 || j == 0)
                    dp[i][j] = (j == 0) ? 0 : INT_MAX - 1;
            }
        }
        for(int i=0;i<n+1;i++){
            for(int j=1;j<amount+1;j++){
                int pick = 1+dp[i][j-1];
                int not_pick = dp[i-1][j];
                dp[i][j] = min(pick,not_pick);
            }
        }
        return dp[n-1][amount-1];
    }
};