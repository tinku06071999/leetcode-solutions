/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // if(!root || root==p || root==q)return root;
        // if(p->val< root->val && q->val > root->val)return root;
        // TreeNode* left = lowestCommonAncestor(root->left,p,q);
        // TreeNode* right = lowestCommonAncestor(root->right,p,q);
        // if(!left)return right;
        // if(!right)return left;
        // else return root;
       
        if(!root)return root;
        int curr = root->val;
        // if((curr > p->val && curr < q->val ) || (curr > q->val && curr < p->val ))       return root;
        if(curr< p->val && curr < q->val)
        return lowestCommonAncestor(root->right,p,q);
        if(curr > p->val && curr > q->val)
        return lowestCommonAncestor(root->left, p, q);
        return root; 
    }
};