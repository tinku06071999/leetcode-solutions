class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int s_pos=-1;
        int e_pos=-1;
        int s =0;
        int e = n-1;
        int mid=0;
        while(s<=e){
            mid = (s+e)/2;
            if(nums[mid]==target){
                e_pos=mid;
                s = mid+1;
            }
            else if(nums[mid]>target)e=mid-1;
            else s=mid+1;

        }
        s=0;
        e = n-1;
        while(s<=e){
            mid = (s+e)/2;
            if(nums[mid]==target){
                 s_pos = mid;
                 e = mid-1;
            }
            else if(nums[mid]>target)e = mid-1;
            else s = mid+1;
        }
        return {s_pos,e_pos};
    }
};