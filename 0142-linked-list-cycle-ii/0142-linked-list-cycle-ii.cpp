/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        // first method  TLE
        // ListNode* p1 = head;
        // ListNode* p2 = p1->next;
        // while(p1){
        //     p2 = p1->next;
        //     while(p2){
        //         if(p2==p1)return p1;
        //         p2 = p2->next;
        //     }
        //     p1 = p1->next;
        // }
        // return nullptr;

        // second solution

        set<ListNode*>st;
        ListNode* temp = head;
        int i=0;
        while(temp){
            if(st.find(temp)!=st.end()){
                return temp;
            }
            else{
                st.insert(temp);
                i++;
            }
            temp = temp->next;
        }
        return nullptr;
    }
};