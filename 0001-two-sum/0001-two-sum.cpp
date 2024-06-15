class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int n = nums.size();
        unordered_map<int, int>mp;

       for(int i=0;i<n;i++){
        int num = target - nums[i];
        if(mp.count(num))return{mp[num], i};
          mp[nums[i]] = i;
       }
       return {};
    }
};