class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // sort(nums.begin(), nums.end());

        // for(int i=1;i<nums.size();i++){
        //     if(nums[i] == nums[i-1]){
        //         return nums[i];
        //     }
        // }
        // return 0;
       
       for(auto i : nums){
        i = abs(i);
        if(nums[i] > 0){
            nums[i] = -nums[i];
        }else{
            return i;
        }
       }
       return nums.size();

    }
};