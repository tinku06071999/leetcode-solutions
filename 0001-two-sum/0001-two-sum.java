class Solution {
    public int[] twoSum(int[] nums, int target) {
        int [] ans = new int[2];
        int len =  nums.length;
        int[][] numsWithIndex = new int[len][2];
        for(int i =0;i<len;i++){
            numsWithIndex[i][0] = nums[i];
            numsWithIndex[i][1] = i;
        }
        Arrays.sort(numsWithIndex, (a,b) -> Integer.compare(a[0],b[0]));
        int left = 0;
        int right = len - 1 ;
        while(left < len && right >= 0){
            int sum = numsWithIndex[left][0] + numsWithIndex[right][0];
            if(sum == target){
                ans[0] = numsWithIndex[left][1];
                ans[1] = numsWithIndex[right][1];
                return ans;
            }else if(sum > target){
                right--;
            }else{
                left++;
            }
        }
        return ans;
    }
}