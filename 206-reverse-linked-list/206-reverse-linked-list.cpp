class Solution
{
    public:
        ListNode* reverseList(ListNode *head)
        {
           	//edge case
            if (head == NULL || head->next == NULL) return head;
            ListNode *previous = NULL;
            ListNode *curr = head;
            ListNode *forward = NULL;

            while (curr != NULL)
            {
                forward = curr->next;
                curr->next = previous;
                previous = curr;
                curr = forward;
            }
            return previous;
        }
};