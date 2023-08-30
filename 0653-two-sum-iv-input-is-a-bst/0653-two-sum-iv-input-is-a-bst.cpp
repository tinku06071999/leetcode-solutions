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
    void solve(TreeNode* root, vector<int>&v){
        if(!root)return;
        solve(root->left,v);
        v.push_back(root->val);
        solve(root->right,v);
    }
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int>v;
        solve(root,v);
        int n = v.size();
        for(int i=0;i<n;i++){
            // int num =0;
            // if(v[i]<=k)
            int num = k - v[i];
            int s = i+1;
            int e = n-1;
            int mid = (s+e)/2;
            
            while(s<=e){
                if(v[mid]==num)return true;
                else if(v[mid]<num)s = mid+1;
                else e = mid-1;
                mid = (s+e)/2;
            }
       
          
        }
        return false;
    }
};