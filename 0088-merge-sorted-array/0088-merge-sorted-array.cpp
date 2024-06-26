class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // vector<int>nums3(m+n);
        // int i=0, j=0;
        // int temp=0;
        // while(i<m && j< n){
        //     if(nums1[i] <= nums2[j]){
        //         nums3[temp++] = nums1[i++];
        //     }else{
        //         nums3[temp++] = nums2[j++];

        //     }
        // }
        // while(i< m)nums3[temp++] = nums1[i++];
        // while(j< n)nums3[temp++] = nums2[j++];

        // for(int i=0;i<m+n ; i++)nums1[i] = nums3[i];

       int i = m-1;
       int j = n-1;
       int k = m+n-1;

       while(i>=0 && j>=0){
        if(nums1[i] < nums2[j])nums1[k--] = nums2[j--];
        else nums1[k--] = nums1[i--];
       }
       while(j>=0)nums1[k--] = nums2[j--];
    }
};