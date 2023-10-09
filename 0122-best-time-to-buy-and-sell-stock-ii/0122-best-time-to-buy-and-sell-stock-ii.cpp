class Solution {
public:
    int solve(int idx,vector<int>& prices,int buy,int n, vector<vector<int>> &dp ){
        if(idx == n)return 0;
        if(dp[buy][idx] != -1)return dp[buy][idx];
        int profit = 0;
        if(buy){
            profit = max(-prices[idx] + solve(idx+1,prices,0,n,dp) , 0 + solve(idx+1,prices,1,n,dp));
        }
        else{
            profit = max(  prices[idx] + solve(idx+1,prices,1,n,dp) , 0 + solve(idx+1,prices,0,n,dp));

        }
        return dp[buy][idx] = profit;
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>>dp(2, vector<int>(n+1,-1));
         return solve(0,prices,1,n,dp);
    }
};