class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        //TC (2N) && SC O(N);
        // vector<int>pos;
        // vector<int>neg;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]>0)pos.push_back(nums[i]);
        //     else neg.push_back(nums[i]);
        // }
        // int i=0,j=0,k=0;
        // while(i<pos.size() || j<neg.size()){
        //     if(k%2==0 && i<pos.size())nums[k]=pos[i++];
        //     if(k%2!=0 && j<neg.size()) nums[k]=neg[j++];
        //     k++;
        // }
        // return nums;
       //
        

        // TC

        vector<int>v(nums.size());
        int countneg=0;
        int countpos=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                countpos++;
                int idx = 2*countpos-2;
                v[idx] = nums[i];
            }
            else if(nums[i]<0){
                countneg++;
                int idx = 2*countneg-1;
                v[idx] = nums[i];
            }
        }
        return v;
    }
};