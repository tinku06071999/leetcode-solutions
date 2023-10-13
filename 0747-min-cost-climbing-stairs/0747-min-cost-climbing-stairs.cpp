class Solution {
public:
    int solve(vector<int> & cost, int idx, vector<int>&dp){
        if(idx<0)return 0;
        if(dp[idx] != -1)return dp[idx];
        int one = cost[idx] + solve(cost, idx-1,dp);
        int two = cost[idx] + solve(cost, idx-2,dp);
        return dp[idx] = min(one, two);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>dp(n,-1);
        int f  = solve(cost,n-1,dp);
        int s =  solve(cost,n-2,dp);

        return min(f,s);
        // dp[n]=0;
        // for(int i=0;i<n;i++){
            
        // }
        // return dp[n-1];
    }
};