class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int n=nums.size();
       int i=0;
       int count=0;
       int maxi = INT_MIN;
       for(int i=0;i<n;i++){
           if(nums[i]==1)count++;
           if(nums[i]==0){
               maxi = max(maxi,count);
               count=0;
           }
       } 
       maxi = max(count,maxi);
       return maxi;
    }
};