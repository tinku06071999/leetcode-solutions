class Solution {
private: 
    int pivot(vector<int>& nums){
         int n = nums.size();
         int left=0;
         int right=n-1;
         int mid = (left+right)/2;
         while(left<=right){
             if(mid>0 && nums[mid]<nums[mid-1]){
                return mid;
            }
             
             else if(nums[left]==nums[right]){ //when duplicate is present 
                left++;
            }
            else if(nums[mid]>=nums[left] && nums[mid]>nums[right]){
                left=mid+1;

            }
             else right = mid-1;
             mid = (left+right)/2;
         }
         return left;
    }
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        if(nums[0]==target)return true;
        if(nums[n-1]==target)return true;
        // int pivot_idx = pivot(nums);
        // cout<<pivot_idx;
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