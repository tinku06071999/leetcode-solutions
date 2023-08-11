class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int s=0;
        int e = n-1;
        int mid=0;
        if(nums[n-1]<target)return n;
        if(nums[n-1]==target)return n-1;
        int idx=0;
        while(s<=e){
            mid = (s+e)/2;
            if(nums[mid]==target){
                idx = mid;
                e = mid-1;
            }
            else if(nums[mid]>target){
                idx = mid;
                e = mid-1;
            }
            else s = mid+1;
        }
        return idx;
    }
};