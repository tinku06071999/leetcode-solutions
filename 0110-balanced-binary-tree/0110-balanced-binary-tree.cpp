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
    int height(TreeNode* root){
        if(!root)return 0;
        int left = 1 + height(root->left);
        int right = 1 + height(root->right);
         return max(left,right);
    }
    int solve(TreeNode* root){
        if(!root)return 0;
        int left =  solve(root->left);
        if(left == -1)return -1;
        int right = solve(root->right);
        if(right==-1)return -1;
        return (abs(left-right) <= 1) ? max(left,right) + 1 : -1;
    }
    bool isBalanced(TreeNode* root) {
        if(!root)return true;
        return solve(root) != -1;
    }
};