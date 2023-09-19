class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        for(auto x : nums){
            int idx = abs(x);
            if(nums[idx]<0)return idx;
            nums[idx] = -nums[idx];
        }
        return n;
    }
};