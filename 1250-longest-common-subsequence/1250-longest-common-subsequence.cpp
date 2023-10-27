class Solution {
public:
    int solve(int idx1, int idx2, string text1, string text2, vector<vector<int>>&dp){
        if(idx1 <0 || idx2< 0) return 0;
        if(dp[idx1][idx2] != -1)return dp[idx1][idx2];
        if(text1[idx1] == text2[idx2]){
            return dp[idx1][idx2] = 1 + solve(idx1-1, idx2-1, text1, text2,dp);
        }
        
        else{
            return dp[idx1][idx2] = max(solve(idx1-1, idx2, text1, text2,dp), solve(idx1, idx2-1, text1, text2,dp));
        }
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n1 = text1.size();
        int n2 = text2.size();
        vector<vector<int>>dp(n1+1, vector<int>(n2+1,-1));
        // return solve (n1-1, n2-1, text1, text2,dp);
        for(int i =0; i<=n1;i++)dp[i][0] = 0;
        for(int i =0; i<=n2;i++)dp[0][i] = 0;

        for(int idx1=1;idx1<=n1;idx1++){
            for(int idx2=1;idx2<=n2;idx2++){
                if(text1[idx1-1] == text2[idx2-1]){
                     dp[idx1][idx2] = 1 + dp[idx1-1][idx2-1];
                }else{
                     dp[idx1][idx2] = max(dp[idx1-1][idx2], dp[idx1][idx2-1]);
                }
            }
        }
        return dp[n1][n2];
    }
};