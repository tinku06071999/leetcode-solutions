/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public void solve(TreeNode root, List<List<Integer>> ans, int level ){
            if(root == null)return;
            Queue<TreeNode> q = new LinkedList<>();
            q.add(root);
            level++;
            while(q.size() != 0){
                int size = q.size();
                List<Integer> temp = new ArrayList<>();
                for(int i =0; i < size; i++){
                    TreeNode node = q.peek();
                    int value = node.val;
                    temp.add(value);
                    q.poll();
                    if(node.left != null) q.add(node.left);
                    if(node.right != null) q.add(node.right);
                }
                if(level % 2 == 0){
                    Collections.reverse(temp);
                }
                ans.add(temp);
                level++;
            }
    }
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        List<List<Integer>> ans = new ArrayList<>();
        if(root == null)return ans;
        solve(root, ans, 0);
        return ans;
    }
}