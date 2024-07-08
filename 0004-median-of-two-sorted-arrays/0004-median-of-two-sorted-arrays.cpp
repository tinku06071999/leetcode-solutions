class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>temp;
        double ans =0 ;
        int i =0, j=0;
        int n = nums1.size();
        int m = nums2.size();
       
        while(i<n && j < m){
            if(nums1[i] >= nums2[j]){
                 temp.push_back(nums2[j++]);
            }else{
                temp.push_back(nums1[i++]);
            }
        }
        while(i < n)temp.push_back(nums1[i++]);
        while(j < m)temp.push_back(nums2[j++]);

        if((n+m) % 2 == 0){
            int idx1 = (m+n)/2;
            int idx2 = ((m+n)/2) -1;

            ans =double(temp[idx1] + temp[idx2])/2;
            return ans;
        }

        ans = temp[(m+n)/2];
        return ans;
    }
};