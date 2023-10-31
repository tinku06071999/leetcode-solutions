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
    ListNode* reverse(ListNode* head){
        if(head == nullptr)return head;
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        // first approach by reversing the node 

        // head = reverse( head);
        
        // if(n==1){
        //     head =  head->next;
        //     head = reverse(head);
        //     return head;
        // }
        // ListNode* temp = head;

        // for(int i=1;i<n-1;i++){
        //    temp = temp->next;
        // }
        // temp->next = temp->next->next;
        // head = reverse(head);
        // return head;

        // second approach 
        // if(head==nullptr)return head;
        // int cnt = 0;
        // ListNode* temp = head;
        // while(temp){
        //     cnt++;
        //     temp = temp->next;
        // }
        // if(cnt - n == 0)return head->next;
        // temp = head;
        // for(int i=1;i<cnt - n ; i++){
        //   temp = temp->next;
        // }
        // temp->next = temp->next->next;
        // return head;

        // third approach 
        // if(!head->next && n>=1)return nullptr;
        // ListNode* dummy = new ListNode();
        // dummy->next = head;
        // ListNode* slow = dummy;
        // ListNode* fast = dummy;

        // for(int i=1;i<=n;++i){
        //     fast = fast->next;
        // }
        // while(fast->next){
        //    fast = fast->next; 
        //    slow = slow->next;
        // }
        // slow->next = slow->next->next;
        // return head;
        ListNode * start = new ListNode();
        start -> next = head;
        ListNode* fast = start;
        ListNode* slow = start;     

        for(int i = 1; i <= n; ++i)
            fast = fast->next;
    
        while(fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        
        slow->next = slow->next->next;
        
        return start->next;
    }
};