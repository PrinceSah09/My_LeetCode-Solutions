class Solution
{
    public:
        ListNode* swapPairs(ListNode *head)
        {
            ListNode *curr = head;
            ListNode *frwrd = NULL;
            ListNode *prev = NULL;

            int count = 0;
            while (curr != NULL && count < 2)
            {
                frwrd = curr->next;
                curr->next = prev;
                prev = curr;
                curr = frwrd;
                count++;
            }

            if (frwrd != NULL)
            {
                head->next = swapPairs(frwrd);
            }
            return prev;
        }
};