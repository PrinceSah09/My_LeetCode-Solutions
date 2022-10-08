//function to find number of node in a list
int getCount(ListNode *head)
{
    ListNode *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}



class Solution
{
    public:
        ListNode* middleNode(ListNode *head)
        {
            int count = getCount(head);
            ListNode*temp = head;
            ListNode *ans = NULL;;
            int t = (count/2);
            while(t--){
               temp = temp->next; 
            }
            return temp;
        }
};


/* Approach - 2 

// Slow and fast (Two pointer approach )


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

*/
