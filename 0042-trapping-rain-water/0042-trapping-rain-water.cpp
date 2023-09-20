class Solution {
public:
    int trap(vector<int>& height) {
        int n= height.size();
        int ans=0;
        // for(int i=0;i<n;i++){
        //     int left=0;
        //     int right=0;
        //     int j=i;
        //     while(j>=0){
        //         left = max(left,height[j]);
        //         j--;
        //     }
        //      j=i;
        //     while(j<n){
        //         right = max(right,height[j]);
        //         j++;
        //     }
        //     ans += min(left,right)-height[i];
        // }
        // return ans;

        // second solution

        int prefix[n];
        int suffix[n];
        prefix[0]= height[0];
        suffix[n-1] = height[n-1];
        for(int i=1;i<n;i++){
            prefix[i] = max(prefix[i-1],height[i]);
        }
        for(int i=n-2;i>=0;i--){
            suffix[i] = max(suffix[i+1],height[i]);
        }
        for(int i=0;i<n;i++){
            ans += min(prefix[i],suffix[i])-height[i];
        }
        return ans;
    }
};