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
    ListNode* middleNode(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        // if(!fast->next->next)return slow;
        int cnt=0;
        while(slow){
            cnt++;
            slow=slow->next;
        }
        slow = head;
        cnt /=2;
        while(cnt){
            cout<<"i am in the loop"<<endl;
            slow = slow->next;
            fast = fast->next->next;
            cnt--;
        }
        return slow;
    }
};