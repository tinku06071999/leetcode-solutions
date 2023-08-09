class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        // vector<int>ans(nums.size());
        vector<int>lesser;
        vector<int>greater;
        vector<int>equal;
        for(int i=0;i<nums.size();i++ ){
            if(nums[i]<pivot)lesser.push_back(nums[i]);
            else if(nums[i]==pivot)equal.push_back(nums[i]);
            else greater.push_back(nums[i]);
        }
        for(int i=0;i<lesser.size();i++){
            nums[i]=lesser[i];
        } int idx = lesser.size();
        for(int i=0;i<equal.size();i++){
            nums[idx++]=equal[i];
        }idx = lesser.size()+equal.size(); 
        for(int i=0;i<greater.size();i++){
            nums[idx++]=greater[i];
        }
       return nums;
    }
};