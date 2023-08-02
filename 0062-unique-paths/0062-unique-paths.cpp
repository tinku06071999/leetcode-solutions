class Solution {
public:
// memoization
    int solve(int m, int n,vector<vector<int>>&dp){
        if(m==0 && n==0)return 1;
        if(m<0 || n<0)return 0;
        if(dp[m][n]!=-1)return dp[m][n];
         int left = solve(m,n-1,dp);
         int up = solve(m-1,n,dp);
        dp[m][n]= up+left;
        return dp[m][n];
    }
    // tabulation

    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n));
        // return solve(m-1,n-1,dp);

        // tabulation
        dp[0][0]=1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int down=0,right=0;
                if(i==0 && j==0){
                    dp[i][j]=1;
                    continue;
                }
                int up=0,left=0;
                if(i>0)up= dp[i-1][j];
                if(j>0)left = dp[i][j-1];
                // cout<<left<<" "<<up<<endl;
                dp[i][j]=up+left;
            }
        }
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         cout<<dp[i][j]<<" ";
        //     }cout<<endl;
        // }
        return dp[m-1][n-1];
    }
};