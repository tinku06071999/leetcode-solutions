class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // int i=0,j=1;
        // int n = nums.size();
        // if(n==1)return nums[0];
        // while(i<n || j<n){
        //     if(nums[i]!=nums[j]){
        //         return nums[i];
        //     }else{
        //         i=i+2;
        //         j=j+2;
        //     }
        // }
        // return 0;
        int s=0,e=nums.size()-1;
        int mid = s+(e-s)/2;
        if(nums.size()==1)return nums[0];
        while(s<e){
            if(mid==0){
                if(nums[mid+1]==nums[mid])s=mid+1;
                else return nums[mid];
            }
           if(nums[mid-1]!=nums[mid] && nums[mid+1]!=nums[mid])return nums[mid];
           else if(nums[mid]==nums[mid-1]){
               if(mid%2!=0)s = mid+1;
               else e = mid-1;
           }
           else  {
               if(mid % 2 ==0)s = mid+1;
               else e = mid-1;
           }
         mid = s+(e-s)/2;
        }
        return nums[e];
    }
};