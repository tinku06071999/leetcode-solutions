/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    public void solve(TreeNode root, Map<TreeNode, List<TreeNode>> mp, List<TreeNode>temp){
        if(root == null){
            return;
        }
        temp.add(root);
        mp.put(root, new ArrayList<>(temp));
        solve(root.left, mp, temp);
        solve(root.right,mp,temp);
        temp.remove(temp.size()-1);  
    }
    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        // Map<TreeNode, List<TreeNode>> mp = new HashMap<>();
        // List<TreeNode>temp = new ArrayList<>();
        // solve(root,mp,temp);
        // // for(Map.Entry<TreeNode,List<Integer>> entry : mp.entrySet()){
        //     List<TreeNode> list1 = new ArrayList<>();
        //     List<TreeNode> list2 = new ArrayList<>();
        //     list1 = mp.get(p);
        //     list2 = mp.get(q);
        // // }
        // int i = list1.size() - 1;
        // int j = list2.size() - 1;
        // while( i >= 0 && j >= 0){
        //     if(j > i){
        //         if(list1.get(i) == list2.get(j))return list1.get(i);
        //         j--;
        //     }else{
        //         if(list1.get(i) == list2.get(j))return list1.get(i);
        //         i--;
        //     }
        // }
        // return null;
        if(root == null || root == p || root == q)return root;

        TreeNode left = lowestCommonAncestor(root.left, p, q);
        TreeNode right = lowestCommonAncestor(root.right, p, q);

        if(left == null)return right;
        if(right == null)return left;

        return root;
    }
}