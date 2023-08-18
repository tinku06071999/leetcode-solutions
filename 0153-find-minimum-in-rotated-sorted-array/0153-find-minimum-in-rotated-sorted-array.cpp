class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        int e = n-1;
        int mid = (s+e)/2;
        // if(n==2)return min(nums[0],nums[1]);
        while(s<e){
            if(nums[mid]>=nums[0])s = mid+1;
            else e =mid;
            mid = (s+e)/2;
        }
        if(s==e && e==n-1)return min(nums[0],nums[n-1]);
        return nums[s];
    }
};