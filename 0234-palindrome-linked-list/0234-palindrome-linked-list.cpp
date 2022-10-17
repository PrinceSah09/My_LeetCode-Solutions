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
    
    bool get(ListNode*head){
        if(head==NULL)return false;
        vector<int>v;
        while(head!=NULL){
            v.push_back(head->val);
            head = head->next;
        }
        int s=0,e=v.size()-1;
        while(s<=e){
            if(v[s++]!=v[e--])return false;
        }
        return true;
    }
    
    bool isPalindrome(ListNode* head) {
        return get(head);
    }
};