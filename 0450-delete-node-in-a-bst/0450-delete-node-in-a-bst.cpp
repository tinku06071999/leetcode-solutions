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
    TreeNode* helper(TreeNode* root){
        if(!root->right)return root->left;
        if(!root->left) return root->right;
        TreeNode* rightchild = root->right;
        TreeNode* lastright = rightmost(root->left);
        lastright->right = rightchild;
        return root->left;
        }
    TreeNode* rightmost(TreeNode* root){
            if(root->right== nullptr)return root;
            return rightmost(root->right);
     }
    TreeNode* deleteNode(TreeNode* root, int key) {
        
        if(!root)return root;
     
      if(root->val == key){
          return helper(root);
      }
       TreeNode* dummy = root;
       while(root){
            if(root->val > key){
                if(root->left && root->left->val == key){
                   root->left = helper(root->left);
                   break;
                }
                else root = root->left;
            }
            else{
                if(root->right && root->right->val == key){
                   root->right = helper(root->right);
                   break;
                }
                else root = root->right;
            }
       }
       return dummy;
    }
};