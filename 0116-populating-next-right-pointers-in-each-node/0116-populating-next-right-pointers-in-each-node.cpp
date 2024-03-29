/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root)return root;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            Node* node = q.front(); 
            for(int i=0;i<n;i++){
                node = q.front();
                q.pop();
                if(!q.empty())node->next=q.front();
                if(node->left)  q.push(node->left);
                if(node->right) q.push(node->right);
                if(i==n-1)node->next=NULL;
            }
            // Node* newnode = new Node('#');
            // node->next=newnode; 
        }
        return root;
    }
};