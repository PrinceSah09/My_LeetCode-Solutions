 class Solution
 {
     public:

         ListNode* reverseBetween(ListNode *head, int left, int right)
         {
            	//              if (head == NULL || left == right)
            	//              {
            	//                  return head;
            	//              }
            	//              ListNode *prev = NULL;
            	//              ListNode *tail = NULL;
            	//              ListNode *temp = NULL;

            	//              ListNode dummy(NULL);  	//creating a new Node
            	//              prev = &dummy;
            	//              dummy.next = head;
            	//              for (int i = 0; i < left - 1; i++)
            	//              {
            	//                  prev = prev->next;
            	//              }
            	//              tail = prev->next;
            	//              for (int i = 0; i < right - left; i++)
            	//              {
            	//                  temp = prev->next;
            	//                  prev->next = tail->next;
            	//                  tail->next = tail->next->next;
            	//                  prev->next->next = temp;
            	//              }

            	//              return dummy.next;
            	//   
            	// }

            	// **********************************************************************

            	//              if (head == NULL) return NULL;

            	//              ListNode *cur = head, *prev = NULL;
            	//              while (left > 1)
            	//              {
            	//                  prev = cur;
            	//                  cur = cur->next;
            	//                  left--;
            	//                  right--;
            	//              }

            	//              ListNode *start = prev, *tail = cur;
            	//              ListNode *temp = NULL;
            	//              while (right > 0)
            	//              {
            	//                  temp = cur->next;
            	//                  cur->next = prev;
            	//                  prev = cur;
            	//                  cur = temp;
            	//                  right--;
            	//              }

            	//              if (start != NULL)
            	//              {
            	//                  start->next = prev;
            	//              }
            	//              else
            	//              {
            	//                  head = prev;
            	//              }
            	//              tail->next = cur;
            	//              return head;

            	// **********************************************************************          

             ListNode *dummy = new ListNode(0), *pre = dummy, *cur;
             dummy->next = head;
             for (int i = 0; i < left - 1; i++)
             {
                 pre = pre->next;
             }
             cur = pre->next;
             for (int i = 0; i < right - left; i++)
             {
                 ListNode *temp = pre->next;
                 pre->next = cur->next;
                 cur->next = cur->next->next;
                 pre->next->next = temp;
             }
             return dummy->next;
         }
 };

	// ref  : https://www.youtube.com/watch?v=tHKp8UuOkm4