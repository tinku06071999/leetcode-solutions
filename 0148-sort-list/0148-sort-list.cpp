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
   ListNode* mergelist(ListNode* l1, ListNode* l2){
       ListNode* ptr = new ListNode(0);
       ListNode* curr = ptr;

       while(l1 && l2){
           if(l1->val <= l2->val){
               curr->next = l1;
               l1 = l1->next;
           }
           else{
               curr->next = l2;
               l2 = l2->next;
           }
           curr = curr->next;
       }
       if(l1){
           curr->next = l1;
           l1 = l1->next;
       }
       if(l2){
           curr->next = l2;
           l2 = l2->next;
       }
       return ptr->next;
   }
    ListNode* sortList(ListNode* head) {
        // vector<int>v;
        // ListNode* temp = head;
        // while(temp){
        //     v.push_back(temp->val);
        //     temp = temp->next;
        // }sort(v.begin(), v.end());
        // ListNode* dummy = new ListNode();
        // ListNode* curr = new ListNode();
        // dummy->next = curr;
        // for(int i=0;i<v.size();i++){
        //     ListNode* tmp = new ListNode(v[i]);
        //     curr->next = tmp;
        //     curr = tmp;
        // }
        // return dummy->next->next;

        if(head ==nullptr || head->next ==nullptr)return head;

        ListNode* temp = nullptr;
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast  && fast->next){
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        temp->next = nullptr;
        ListNode* l1 = sortList(head);
        ListNode* l2 = sortList(slow);
        return mergelist(l1,l2);

    }
};