class Solution {
public:
    int maximumProduct(vector<int>& nums) {
       int p1=1,p2=1;
       int n= nums.size();
       sort(nums.begin(),nums.end());
       p1 = nums[n-1]*nums[n-2]*nums[n-3];
       p2 = nums[n-1]*nums[1]*nums[0];
       return max(p1,p2);
    }
};