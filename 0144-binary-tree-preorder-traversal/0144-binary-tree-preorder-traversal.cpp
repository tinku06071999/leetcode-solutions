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
  void solve(vector<int>&v,TreeNode* root){
      if(root==nullptr)return;
      v.push_back(root->val);
      solve(v,root->left);
      solve(v,root->right);
  }
    vector<int> preorderTraversal(TreeNode* root) {
    //    vector<int>v;
    //    solve(v,root);
    //    return v;
    

    // iterative solution
      vector<int>ans;
      if(root==NULL)return ans;
      stack<TreeNode*>st;
      st.push(root);
      while(!st.empty()){
          TreeNode* temp = st.top();
          st.pop();
          if(temp->right)st.push(temp->right);
          if(temp->left)st.push(temp->left);
          ans.push_back(temp->val);
      }
         return ans;
    }
};