class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        if(n==1)return true;
        // bool flag = nums[1]>=nums[0];
        // for(int i=1;i<n;i++){
        //     if(flag){
        //         if(nums[i]>=nums[i-1])continue;
        //         else flag = !flag;
        //     }
        //     else{
        //         if(nums[i]>nums[i-1])continue;
        //         if(nums[i]<nums[i-1] && i < n-1)return false;

        //     }
        // }
        // return true;
        int second=0;
        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                second = i;
                break;
            }
        }
        if(!second)return true;
        int i=0;
        while(second<n){
            if(second < n-1 && nums[second]>nums[second+1] )return false;
            if(nums[second]>nums[i])return false;
            second++;
        }
        return true;
    }
};