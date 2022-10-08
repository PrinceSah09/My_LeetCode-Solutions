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
