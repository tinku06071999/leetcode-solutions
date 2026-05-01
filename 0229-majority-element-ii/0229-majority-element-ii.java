class Solution {
    public List<Integer> majorityElement(int[] nums) {
        int len = nums.length;
        int ele1 = Integer.MIN_VALUE;
        int ele2 = Integer.MIN_VALUE;
        int c1 = 0;
        int c2 = 0;
        for(int i = 0; i < len; i++){
            if(c1 == 0 && nums[i] != ele2){
                ele1 = nums[i];
                c1=1;
            }else if(c2 == 0 && nums[i] != ele1){
                ele2 = nums[i];
                c2=1;
            }else if(nums[i] == ele1){
                c1++;
            }else if(nums[i] == ele2){
                c2++;
            }else{
                c1--;
                c2--;
            }
        }
        List<Integer>ans = new ArrayList<>();
        int cnt1 = 0;
        int cnt2 = 0;
        for(int i=0;i<len;i++){
            if(nums[i] == ele1)cnt1++;
            if(nums[i] == ele2)cnt2++;
        }
        if(cnt1 > Math.floor(len/3))ans.add(ele1);
        if(cnt2 > Math.floor(len/3))ans.add(ele2);
        return ans;
    }
}