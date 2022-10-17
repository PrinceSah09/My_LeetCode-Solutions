class Solution
{
    public:
        ListNode* removeElements(ListNode *head, int val)
        {

            /*3 -> 3-> 5 -> 3 -> 7  ||  here head->val = 3;

            Step 1: we start a loop till 'head->val != val',             LL will become=> 5 -> 3 -> 7

            Step 2: If head == NULL means all val of Node was equal to given
            'val' hence we return head itself

              ex: 3 -> 3-> 3-> 3-> 3   => from above loop our head currently
              pointing to last node
              because if(head->val==va;)head=head->next;
              hence we return head which is currently NULL.

            Step 3: For iterate through LL we create a new pointer
                which is initially pointing to head Node

            Step 4: Start a loop till 'temp->next != NULL' we just check wether
                    the val of a 'current->next' node
                    is equal to the given val, If yes then we just skip that Node
                    and point our current pointer to 
                    the current->next->next pointer 
                    else: we go to the next pointer using temp = temp->next .
                    And lastly we return head.
                    why? beacuse temp is currently at the last Node and head
                    is still at first position, in the given 
                    qestion we have to return head of a node, In other word
                    first pointer of a node 

                 Hope this will help :)
            */

           	// Step 1:
            while (head != NULL && head->val == val)
            {
                head = head->next;
            }

           	// Step 2:
            if (head == NULL) return head;

           	// Step 3:
            ListNode *temp = head;

           	// Step 4:
            while (temp->next != NULL)
            {
                if (temp->next->val == val)
                {
                    temp->next = temp->next->next;
                }
                else
                {
                    temp = temp->next;
                }
            }
            return head;
        }
};