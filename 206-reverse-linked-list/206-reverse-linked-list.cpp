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
    ListNode* reverseList(ListNode* head) {
        //edge case
        if( head==NULL || head->next==NULL ) return head;
        //creating three different pointer
        ListNode *pehla = NULL;
        ListNode *current = head;
        ListNode *agla = NULL;
        
        while(current!=NULL){
            agla = current ->next;
            current->next = pehla;
            
            //keep ++
            pehla = current;
            current = agla;
            
        }
        return pehla;
    }
};