class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;
        // for(int i=0;i<n;i++){
        //     ans = min(ans, nums[i]);
        // }
        // return ans;


    //     int s = 0;
    //     int e = n-1;
    //     int mid = (s+e)/2;
    //     while(s<=e){
    //         if(nums[mid] >= nums[s]){
    //             ans = min(nums[s],ans);
    //             s = mid+1;
    //         }
    //         else{
    //             ans = min(nums[mid],ans);
    //             e = mid-1;
    //         }
    //         mid = (s+e)/2;
    //     }
    //     return ans;
    	int s = 0;
	int e = nums.size()-1;
	while(s<e){
		int mid = (s+e)/2;
		if(nums[mid] >= nums[0]){
					s = mid+1;
		}else if(nums[mid] == nums[s] && nums[mid] == nums[e]){
			s++;
			e--;
		} else{
			e = mid;
		}
	}
	return min( nums[s], nums[0]);
    }
};