class Solution {
public:
    int solve(vector<int> & cost, int idx, int n,  vector<int>&dp){
        if(idx>=n)return 0;
        if(dp[idx] != -1)return dp[idx];
        int one = cost[idx] + solve(cost, idx+1,n,dp);
        int two = cost[idx] + solve(cost, idx+2,n,dp);
        return dp[idx] = min(one, two);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>dp(n,-1);
        int f  = solve(cost,0,n,dp);
        int s =  solve(cost,1,n,dp);

        return min(f,s);
    }
};