
/* Here you have only access of the Node that you have to deleting
     Step 1: Create a new Node and assign it's pointer to 
             the next of Node  ( ListNode *temp = curr->next;)
     Step 2: Assign the value of new created Node to
             the give Node (curr->val = temp->val;)
     
     Step 3: Make connection between curr Node to 
             the temp->next Node (  curr->next = temp->next;)
             
             
    YouTube ref:  https://www.youtube.com/watch?v=aYMkovfoPqU 
             
*/


class Solution
{
    public:
        void deleteNode(ListNode *curr)
        {
            ListNode *temp = curr->next;   // Step 1 
            curr->val = temp->val;         // Step 2
            curr->next = temp->next;	   // Step 3
            
            delete temp;	//delete temp  (optional)
        }
};
 