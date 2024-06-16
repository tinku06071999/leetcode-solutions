class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        // if(n==1)return nums[0];
        // sort(nums.begin(), nums.end());
        // for(int i=0;i<n;i++){
        //     int j = i;
        //     while(j<n && nums[j] == nums[i] ){
        //         j++;
        //     }
        //     int count = j-i;
        //     if((n / 2) < count )return nums[i];
        // }
        // return n;


        unordered_map<int, int> mp;

      for(int i=0;i<n;i++){
        mp[nums[i]]++;
      }

      for(auto it : mp){
        if(it.second > n/2)return it.first;
      }
      return n;
    }
};