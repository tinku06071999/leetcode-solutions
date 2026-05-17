class Solution {
    public int[] twoSum(int[] nums, int target) {
        int [] ans = new int[2];
        int len =  nums.length;
       HashMap<Integer,Integer> mp = new HashMap<>();
       for(int i =0;i<len;i++){
         int diff = target - nums[i];
         if(mp.containsKey(diff)){
            return new int[]{ i, mp.get(diff)};
         }
         mp.put(nums[i],i);
       }
       return new int[]{-1,-1};
    }
}