class Solution {
public:
// recursion without memoization
  // int solve(int idx,vector<int>&nums,vector<int>&dp){
  //     if(idx==0) return nums[0];
  //     if(idx<0) return 0;
  //     int pick = nums[idx]+solve(idx-2,nums,dp);
  //     int notPick = 0+solve(idx-1,nums,dp);
  //     return= max(pick,notPick);
   
  // }
  // with memoization
//   int solve(int idx,vector<int>&nums,vector<int>&dp){
//       if(idx==0) return nums[0];
//       if(idx<0) return 0;
//       if(dp[idx]!= -1)return dp[idx];
//       int pick = nums[idx]+solve(idx-2,nums,dp);
//       int notPick = 0+solve(idx-1,nums,dp);
//       dp[idx]= max(pick,notPick);
//       return dp[idx];
//   }
  // tabulation 
  // int solve(int idx, vector<int>&nums, vector<int>&dp){
  //     dp[0]=nums[0];
  //     int neg = 0;
  //     for(int i=1;i<nums.size();i++){
  //         int pick = nums[i];
  //         if(i>1)pick += dp[i-2];
  //         int notPick = 0+dp[i-1];
  //         dp[i] = max(pick, notPick);
  //     }
  //     return dp[idx];
  // }
    int rob(vector<int>& nums) {
        int n =nums.size();
    //     int i=0;
    //     int j= n-1;
    //     int prefix = 0;
    //     int suffix = 0;
    //     int maxi=0;
    //     for(int i=0;i<n;i++){
            
    //         prefix += nums[i];
    //         suffix += nums[n-1-i];
    //         i =i+2;
    //         j = j-2;
    // }
    //  return max(prefix,suffix);

      // return solve(n-1,nums,dp);

      int prev = nums[0];
        int prev2=0;
        int ans=0;
        for(int i=1;i<n;i++){
            int pick = nums[i];
            if(i>1)pick+=prev2;
            int notpick = prev;
            ans = max(pick,notpick);
            prev2 = prev;
            prev = ans;
            
        }
        return prev;
    }
};