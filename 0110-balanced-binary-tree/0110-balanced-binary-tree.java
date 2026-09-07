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
    public int solve(TreeNode root){
        if(root == null)return 0;
        int left = solve(root.left);
        int right = solve(root.right);
        if(Math.abs(left - right) > 1) return -1;
        if(left == -1 || right == -1) return -1;
        return 1 + Math.max(left, right);
    }
    public boolean isBalanced(TreeNode root) {
        if(root == null)return true;
        int ans = solve(root);
        return ans != -1;
    }
}