class Solution {
public: 
    void solve(int idx, vector<int>&nums, vector<vector<int>>&ans, int n, vector<int>temp){
        if(idx>=n){
          ans.push_back(temp);
          return;
        }
         temp.push_back(nums[idx]);
         solve(idx+1, nums, ans,n,temp);
         temp.pop_back();
          solve(idx+1, nums, ans,n,temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        int n = nums.size();
        vector<int>temp;
        solve(0,nums,ans,n,temp);
        return ans;
    }
    
};