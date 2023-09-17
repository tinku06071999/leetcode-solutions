class Solution {
public:
    bool solve(int idx,vector<int>& nums,int n,vector<int>&dp ){
      if(idx==n-1)return true;
      if(dp[idx] != -1)return dp[idx];
      for(int i=idx+1;i<=nums[idx]+idx;i++){
        if(solve(i,nums,n,dp))return dp[i] = true;
      }
      return dp[idx] = false;
    }
    bool canJump(vector<int>& nums) {
      int n = nums.size();
      vector<int>dp(n,-1);
       return solve(0,nums,n,dp);
    }
};