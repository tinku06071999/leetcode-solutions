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
    ListNode* sortList(ListNode* head) {
        vector<int>v;
        ListNode* temp = head;
        while(temp){
            v.push_back(temp->val);
            temp = temp->next;
        }sort(v.begin(), v.end());
        ListNode* dummy = new ListNode();
        ListNode* curr = new ListNode();
        dummy->next = curr;
        for(int i=0;i<v.size();i++){
            ListNode* tmp = new ListNode(v[i]);
            curr->next = tmp;
            curr = tmp;
        }
        return dummy->next->next;
    }
};