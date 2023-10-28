class Solution {
public:
void solve(int idx, int n , vector<int>&candidates, vector<vector<int>>&ans, vector<int>temp, int target){
        if(idx==n){
            if(target == 0){
                ans.push_back(temp);
                return;
            }
            return;
        }
        temp.push_back(candidates[idx]);
       if(candidates[idx] <= target) solve(idx,n,candidates,ans,temp,target - candidates[idx]);
      temp.pop_back();
      solve(idx+1,n,candidates,ans,temp,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<vector<int>>ans;
        vector<int> temp;
        solve(0,n,candidates,ans,temp, target);
        return ans;
    }
};