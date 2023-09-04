class Solution {
public:
    bool solve(vector<int>& nums,int sum, int idx,vector<vector<int>> &dp){
       if(sum==0)return true;
       if(idx ==0 )return nums[idx] == sum;
       if(dp[idx][sum] != -1)return dp[idx][sum];
       bool not_take = solve(nums,sum,idx-1,dp);
       bool take = false;
       if(nums[idx] <= sum )
       take = solve(nums,sum-nums[idx],idx-1,dp );
       return (dp[idx][sum]  = (take || not_take));
    }
    bool canPartition(vector<int>& nums) {
        int idx= nums.size()-1;
        int sum =0;
        for(int i=0;i<idx+1;i++)sum+=nums[i];
        if(sum%2 !=0 )return false;
        sum = sum / 2;
        vector<vector<int>>dp(idx+1, vector<int>(sum+1,-1));
        return solve(nums,sum,idx,dp);
    }
};