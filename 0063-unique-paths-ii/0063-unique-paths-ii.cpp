class Solution {
    private: 
    int solve(vector<vector<int>>& obstacleGrid,int m ,int n,vector<vector<int>>&dp){
        if(m==0 && n==0)return 1;
        if(m<0 || n<0 ||obstacleGrid[m][n]==1 )return 0;
        if(dp[m][n]!=-1)return dp[m][n];
        int left = solve(obstacleGrid,m,n-1,dp);
        int up = solve(obstacleGrid,m-1,n,dp);
        return dp[m][n]=left+up;
    }
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        if(obstacleGrid[0][0]==1)return 0;
        vector<vector<int>>dp(m,vector<int>(n));
        // return solve(obstacleGrid,m-1,n-1,dp);

        // tabulation

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0){
                   dp[i][j]=1; 
                   continue;
                }
                if(obstacleGrid[i][j]==1){
                   dp[i][j]=0; 
                   continue;
                }
                int up=0,left=0;
                if(i>0) up = dp[i-1][j];
                if(j>0) left = dp[i][j-1];
                dp[i][j] = left+up;
            }

        }
       return dp[m-1][n-1];

    }
};