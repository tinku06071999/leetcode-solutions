class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n = nums.size();
        int low = 0, high = n-1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(nums[mid] == target){
                return mid;
            }else if(nums[low] <= nums[mid]){
                if(nums[low] <= target && nums[mid] >= target){
                    high = mid-1;
                }else{
                    low = mid+1;
                }
           }else{
            if(nums[high] >= target && nums[mid] <= target){
                low = mid+1;
            }else{
                high = mid-1;
            }
           }
        }
        return -1;
    //     int pidx =0;

    //     int low = 0;
    //     int high = nums.size()-1;
    //     if(nums.size() == 1){
    //         if(nums[0]==target)return 0;
    //         return -1;
    //     }
    //     while(low < high){
    //         int mid = (high + low)/2;
    //         if(nums[mid] == nums[0] && nums[mid] == nums[high]){
    //             low++;
    //             high--;
    //         }
    //        else if(nums[mid] >= nums[0]){
    //             low = mid +1;
    //         }else {
    //             high = mid;
    //         }
    //     }
    //     cout<<low;
    //   if(target >= nums[0] && target <= nums[low-1]){
    //     int s =0;
    //      int e = low-1;

    //      while(s <= e){
    //         int mid = (s + e)/2;

    //         if(nums[mid] == target)return mid;
    //         else if(nums[mid] > target)e  = mid-1;
    //         else s = mid+1;
    //      }
    //   }else{
    //     int s =low;
    //      int e = nums.size()-1;

    //      while(s <= e){
    //         int mid = (s + e)/2;

    //         if(nums[mid] == target)return mid;
    //         else if(nums[mid] > target)e  = mid-1;
    //         else s = mid+1;
    //      }
    //   }
    //   return -1;
    }
};