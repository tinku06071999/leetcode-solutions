/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int>v;
        ListNode* temp = head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }
        int s = v.size()-1;
        int m = v[k-1];
        v[k-1] = v[s-k+1];
        v[s-k+1] =  m;
        head = new ListNode(v[0]);
        ListNode* curr =  head;
        int i=1;
        while(i<=s){
            ListNode* temp = new ListNode(v[i]);
            curr->next = temp;
            curr = temp;
            i++;
        }
        return head;
    }
};