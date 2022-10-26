 class Solution
 {
     public:

     ListNode* reverseBetween(ListNode *head, int left, int right)
     {
         if (head == NULL || left == right)
         {
             return head;
         }
         ListNode *prev = NULL, *tail = NULL, *temp = NULL;
         ListNode dummy(NULL);
         prev = &dummy;
         dummy.next = head;
         for (int i = 0; i < left - 1; i++)
         {
             prev = prev->next;
         }
         tail = prev->next;
         for (int i = 0; i < right - left; i++)
         {
             temp = prev->next;
             prev->next = tail->next;
             tail->next = tail->next->next;
             prev->next->next = temp;
         }

         return dummy.next;
     }
 };

	// ref  : https://www.youtube.com/watch?v=tHKp8UuOkm4