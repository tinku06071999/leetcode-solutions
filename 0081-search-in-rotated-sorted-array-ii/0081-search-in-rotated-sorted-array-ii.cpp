class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        if(nums[0]==target)return true;
        if(nums[n-1]==target)return true;
        int s=0;
        int e = n-1;
        int mid = (s+e)/2;
       while(s<=e){
           if(nums[mid]==target)return true;
           if(nums[s]==nums[mid] && nums[mid]==nums[e]){
               s = s+1;
               e = e-1;
               continue;
           }
           if(nums[mid]>=nums[s]){
               if(nums[s]<=target && target<=nums[mid])e =mid-1;
               else s = mid+1;
           }
           else{
               if(nums[mid]<= target && target<=nums[e]) s = mid+1;
               else e = mid-1;
           }
           mid = (s+e)/2;
       }
       return false;
    }
};