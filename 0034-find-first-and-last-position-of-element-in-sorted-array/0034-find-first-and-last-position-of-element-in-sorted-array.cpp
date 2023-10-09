class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int size = nums.size();
        int first_pos = size ;
        int last_pos = -1;
        for(int i=0;i<size;i++){
            if(nums[i]==target && i< first_pos){
                first_pos  = i;
            }
            if(nums[i]==target && i > last_pos){
                last_pos = i;
            }
        }
        if(first_pos == size) first_pos = -1;
        return {first_pos, last_pos};
    }
};