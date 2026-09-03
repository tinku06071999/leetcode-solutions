class Solution {
    public void solve(int[] candidates, int idx, int target, List<List<Integer>>ans, List<Integer> temp){
        if(target == 0){
            ans.add(new ArrayList<>(temp));
            return;
        }
        if(target < 0){
            return;
        }
        if(idx >= candidates.length){
            if(target == 0){
                ans.add(temp);
            }
            return;
        }
        temp.add(candidates[idx]);
        solve(candidates,idx,target - candidates[idx], ans, temp);
        temp.removeLast();
        solve(candidates, idx+1, target, ans, temp);
    }
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>>ans = new ArrayList<>();
        List<Integer> temp = new ArrayList<>();
        int idx = 0;
        solve(candidates,idx, target,ans,temp );
        return ans;
    }
}