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

        // second approach

        // for(int i=n-1;i>=0;i--){
        //     int one = cost[i] + dp[i-1];
        //     int two = cost[i] + dp[i-2];
        //     dp[i] = min(one,two);
        // }
        // return dp[n-1];

        // third approach
        int ans = INT_MAX;
        int curr=0;
        int prev=0;
        int prev2=0;
        for(int i=0;i<n;i++){
            curr = cost[i];
            int one = curr + prev;
            int two = curr + prev2;
            ans = min(one ,two);
            prev2 = prev;
            prev = curr;
        }
        return ans;
    }
};