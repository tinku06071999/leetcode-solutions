class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>temp;
        double ans =0 ;
        int i =0, j=0;
        int n = nums1.size();
        int m = nums2.size();
       
        // while(i<n && j < m){
        //     if(nums1[i] >= nums2[j]){
        //          temp.push_back(nums2[j++]);
        //     }else{
        //         temp.push_back(nums1[i++]);
        //     }
        // }
        // while(i < n)temp.push_back(nums1[i++]);
        // while(j < m)temp.push_back(nums2[j++]);

        // if((n+m) % 2 == 0){
        //     int idx1 = (m+n)/2;
        //     int idx2 = ((m+n)/2) -1;

        //     ans =double(temp[idx1] + temp[idx2])/2;
        //     return ans;
        // }

        // ans = temp[(m+n)/2];
        // return ans;

            int idx2 = (m+n)/2;
            int idx1 = ((m+n)/2) -1;
        int count = 0;
        int ele1 =-1;
        int ele2 =-1;

        while(i < n && j < m){
               if(nums1[i] >= nums2[j]){
                  
                  if(count == idx1)ele1 = nums2[j];
                  if(count == idx2)ele2 = nums2[j];
                  count++;
                  j++;
               }else{
                  if(count == idx1)ele1 = nums1[i];
                  if(count == idx2)ele2 = nums1[i];
                  count++;
                i++;
               }
        }
        while(i <n){
                  
                  if(count == idx1)ele1 = nums1[i];
                  if(count == idx2)ele2 = nums1[i];
                  count++;
                  i++;
       }
       while(j<m){
                  
                  if(count == idx1)ele1 = nums2[j];
                  if(count == idx2)ele2 = nums2[j];
                  count++;
                  j++;
       }
       if((m+n) % 2 ==0){
       return (double(ele1 + ele2))/2;
       }
       return ele2;
    }
};