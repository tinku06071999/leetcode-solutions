class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       
       int ele1 = 0;
       int cnt1 = 0;
       int ele2 = 0;
       int cnt2 = 0;
       int n = nums.size();
       for(int i=0;i<n;i++){
        if(cnt1 == 0 && ele2 != nums[i]){
            ele1 = nums[i];
            cnt1 = 1;
        }else if(cnt2 == 0 && ele1 != nums[i]){
            ele2 = nums[i];
            cnt2 = 1;
        }
        else if(nums[i] == ele1)cnt1++;
        else if(nums[i] == ele2)cnt2++;

        else{
            cnt1--, cnt2--;
        }
       }
      cnt1 =0, cnt2 =0;

      for(int i=0;i<n;i++){
        if(nums[i] == ele1)cnt1++;
        else if(nums[i] == ele2)cnt2++;
      }
      int mini = n/3;

      vector<int>ans;

      if(cnt1 > mini)ans.push_back(ele1);
      if(cnt2 > mini)ans.push_back(ele2);
      return ans;
    //   return {0};
    }
};