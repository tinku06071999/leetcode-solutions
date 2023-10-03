class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        int n = nums.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]==nums[j])count++;
        //     }
        // }
        // return count;

        // second method
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)mp[nums[i]]++;
        for(auto i : mp){
            if(i.second==0 || i.second == 1)continue;
            int n = (i.second)-1;
            count += (n*(n+1))/2;
        }
       return count;
    }
};