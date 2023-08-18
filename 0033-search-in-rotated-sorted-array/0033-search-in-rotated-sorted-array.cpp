class Solution {
public:
  int pivotidx(vector<int>& nums){
      int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        
        while(s<e)
        {
            if(nums[mid]>=nums[0])
            {
                s=mid+1;
            }
            else
            {
                e=mid;
            }
            mid=s+(e-s)/2;
        }
        return s;
  }
    int search(vector<int>& nums, int target) {
        int s=0,e = nums.size()-1;
        int mid = s+(e-s)/2;
        int pivot = pivotidx(nums);
        cout<<pivot<<endl;
        if(nums[e] == target)return e;
        if(nums[s]==target)return s;
        if(nums[pivot]<=target && target<=nums[e]){
            e = nums.size()-1;
            s = pivot;
            mid = s+(e-s)/2;
           
            while(s<=e){
                if(nums[mid]==target)return mid;
                else if(nums[mid]<target)s = mid+1;
                else e = mid-1;
                mid = s+(e-s)/2;
            }
        }
        else{
            s = 0;
            e = pivot-1;
            mid = s+(e-s)/2;
            while(s<=e){
                if(nums[mid]==target)return mid;
                else if(nums[mid]<target)s = mid+1;
                else e = mid-1;
                mid = s+(e-s)/2;
           
            }
        }
        return -1;
    }
};