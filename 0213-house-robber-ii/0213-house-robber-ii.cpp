class Solution {
public:
int solve(vector<int>nums,int n){
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
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1)return nums[n-1];
       vector<int>temp1,temp2;
       for(int i=0;i<n;i++){
           if(i!=0)temp1.push_back(nums[i]);
           if(i!=n-1)temp2.push_back(nums[i]);
        }
        int ans1 = solve(temp1,n-1);
        int ans2 = solve(temp2,n-1);
        return max(ans1,ans2);
    }
};