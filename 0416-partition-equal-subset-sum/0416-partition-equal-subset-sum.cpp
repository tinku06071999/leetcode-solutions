class Solution {
public:
    bool solve(vector<int>&nums, int sum, int idx,vector<vector<int>>&dp){
        if(sum==0)return true;
        // if(idx<0)return false;
        if(idx==0)return nums[idx]==sum;
        if(dp[idx][sum] != -1)return dp[idx][sum];
        bool not_pick = solve(nums,sum,idx-1,dp);
        bool pick = false;
        if(nums[idx]<=sum) pick = solve(nums,sum-nums[idx],idx-1,dp);
        
        return (dp[idx][sum] = (pick||not_pick));
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        int n = nums.size();
        
        for(int i=0;i<n;i++)sum += nums[i];
        if(sum%2 != 0)return false;
        sum /=2;
        vector<vector<int>>dp(n,vector<int>(sum+1,-1));
        return solve(nums,sum,n-1,dp);
    }
};