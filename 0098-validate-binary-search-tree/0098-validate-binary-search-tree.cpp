/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
   bool solve(TreeNode* root,long maxi,long mini ){
       if(!root)return true;
       if(root->val <= mini || root->val >= maxi )return false;
       return (solve(root->left,root->val,mini) && solve(root->right, maxi, root->val));
    }
    bool isValidBST(TreeNode* root) {
       return solve(root,LONG_MAX, LONG_MIN);
    }
};