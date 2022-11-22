 
class Solution
{
    public:
        ListNode* middleNode(ListNode *head)
        {
           	//condition for single or empty list
            if (head == NULL || head->next == NULL) return head;

           	//condition for two or three node
            if (head->next->next == NULL) return head->next;

           	//Initialise the value 
            ListNode *slow = head;
            ListNode *fast = head->next;

            while (fast != NULL)
            {

                fast = fast->next;

                if (fast != NULL)
                {
                    fast = fast->next;
                }
                slow = slow->next;
            }
            return slow;
        }
};
