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
    public int solve(TreeNode root, int[] diameter){
        if(root == null)return 0;
       
        int left = solve(root.left, diameter);
        int right = solve(root.right, diameter);
        diameter[0] = Math.max(diameter[0], left + right);
        return 1 + Math.max(left, right);
        
    }
    public int diameterOfBinaryTree(TreeNode root) {
        if(root == null)return 0;
        int[] diameter = new int[1];
         solve(root, diameter);
         return diameter[0];

        
    }
}