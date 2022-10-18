/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode(int x) : val(x), next(NULL) {}
 *};
 */
class Solution
{
    public:
    
    int get(ListNode*temp){
        int count=0;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        return count;
    }
        ListNode* getIntersectionNode(ListNode *headA, ListNode *headB)
        {
            int l1 = get(headA);
            int l2 = get(headB);

            while (l1 > l2)
            {
                l1--;
                headA = headA->next;
            }
            while (l2 > l1)
            {
                l2--;
                headB = headB->next;
            }

            while (headA != headB)
            {
                headA = headA->next;
                headB = headB->next;
            }

            return headA;
        }
};