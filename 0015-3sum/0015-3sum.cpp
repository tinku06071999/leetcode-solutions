class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        // brute force approach
        // set<vector<int>>st;
        // int n = nums.size();
        // for(int i=0;i<n;i++){
        //     int n1 = nums[i];
        //     for(int j=i+1;j<n;j++){
               
        //         int n2 = nums[j];
        //         for(int k = j+1;k<n;k++){
        //           vector<int>temp;
        //            if(n1+n2+nums[k] == 0){
        //                temp.push_back(n1);
        //                temp.push_back(n2);
        //                temp.push_back(nums[k]);
        //                sort(temp.begin(), temp.end());
        //                st.insert(temp);
        //             //    break;
        //            }
                  
        //         } 
        //     }
          
        // }
        // vector<vector<int>>ans(st.begin(), st.end());
         
        // return ans;

        // better approach
        unordered_map<int,int>mp;
        set<vector<int>>st;
        int n = nums.size();
        for(int i=0;i<n;i++)mp[nums[i]] = i;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int num = -(nums[i]+nums[j]);
                if(mp.find(num) != mp.end() && mp[num] > i && mp[num] > j){
                    vector<int>temp={nums[i],nums[j],num};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
        vector<vector<int>>ans(st.begin(),st.end());

        return ans;
    }
};