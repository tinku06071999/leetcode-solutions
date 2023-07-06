class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        int mini = INT_MAX;
        int i=0;
        int j=0;
        int sum=0;
        while(j<n && i<n){
            
            if(sum<target){
              sum+=nums[j];
              count++;
              if(sum<target)j++;
            }
            // else {
               else if(sum==target){
                    mini = min(mini,count);
                    j++;
                    if(j<=n-1){
                        sum+=nums[j];
                        count++;
                    }
                }
                else{
                    mini = min(count,mini);    
                    sum -=nums[i];
                    i++;
                    count--;
                    if(sum<target)j++;
                    
                }
            // }
        }
        if(mini == INT_MAX)return 0;
        return mini;
    }
};