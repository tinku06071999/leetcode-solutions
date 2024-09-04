class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>mp;
        for(auto i : nums){
            mp.insert(i);
        }
        vector<int>v;
        for(auto i : mp){
            v.push_back(i);
        }
        for(int i =0;i<v.size();i++){
            nums[i] = v[i];
        }
        return v.size();
    }
};