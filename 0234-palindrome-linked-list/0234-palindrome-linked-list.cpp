// /**
//  *Definition for singly-linked list.
//  *struct ListNode {
//  *int val;
//  *ListNode * next;
//  *ListNode() : val(0), next(nullptr) {}
//  *ListNode(int x) : val(x), next(nullptr) {}
//  *ListNode(int x, ListNode *next) : val(x), next(next) {}
//  *};
//  */
// class Solution
// {
//     public:

//        	//Function for find middle node
//         ListNode* getmid(ListNode *head)
//         {
//             ListNode *slow = head;
//             ListNode *fast = head->next;

//             while (fast != NULL && fast->next != NULL)
//             {
//                 fast = fast->next->next;
//                 slow = slow->next;
//             }
//             return slow;
//         }

//    	//Function for reversing a linkedd list
//     ListNode* rev(ListNode *head)
//     {

//         ListNode *prev = NULL;
//         ListNode *curr = head;
//         ListNode *frwd = NULL;

//         while (curr != NULL)
//         {
//             frwd = curr->next;
//             curr->next = prev;

//             curr = frwd;
//             prev = curr;
//         }
//         return prev;
//     }
    
//     bool isPalindrome(ListNode *head)
//     {

//         if (head->next == NULL) return true;
//         if(head->val == head->next->val)return true;
//         if(head->next->next == NULL)return false;
//        	//Step 1:Find Middle
//         ListNode *middle = getmid(head);

//        	//Step 2: Reverse List after middle node
//         ListNode *temp = middle->next;
//         middle->next = rev(temp);

//         ListNode *head1 = head;
//         ListNode *head2 = middle->next;

//         while (head2  != NULL)
//         {
//             if (head1->val != head2->val)
//             {
//                 return false;
//             }
//             head1 = head1->next;
//             head2 = head2->next;
//         }

//         return true;
//     }
// };

// class Solution
// {
//     public:
//         ListNode* findMid(ListNode *head)
//         {
//             ListNode *slow = head, *fast = head;
//             while (fast != NULL && fast->next != NULL)
//             {
//                 slow = slow->next;
//                 fast = fast->next;
//                 if (fast) fast = fast->next;
//             }
//             return slow;
//         }
//     ListNode* reverseList(ListNode *head)
//     {
//         ListNode *prev = NULL, *curr = head, *temp = NULL;
//         while (curr != NULL)
//         {
//             temp = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = temp;
//         }
//         return prev;
//     }
    
//     bool compareList(ListNode *head1, ListNode *head2)
//     {
//         while (head1 != NULL && head2 != NULL)
//         {
//             if (head1->val != head2->val) return false;
//             head1 = head1->next;
//             head2 = head2->next;
//         }
//         return true;
//     }
    
    
//     bool isPalindrome(ListNode *head)
//     {
//         if (head == NULL || head->next == NULL) return true;
//         ListNode *h = head;
//         ListNode *mid = findMid(h);
//         ListNode *h2 = reverseList(mid);
//         return compareList(head, h2);
//     }
// };


class Solution
{
    private:
        ListNode* getMid(ListNode *head)
        {
            ListNode *slow = head;
            ListNode *fast = head->next;
            while (fast != NULL && fast->next != NULL)
            {
                fast = fast->next->next;
                slow = slow->next;
            }
            return slow;
        }

    ListNode* reverse(ListNode *head)
    {
        ListNode *curr = head;
        ListNode *prev = NULL;
        ListNode *next = NULL;

            while (curr != NULL)
            {
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
        return prev;
    }
    public:
        bool isPalindrome(ListNode *head)
        {
            if(head==NULL)return false;
            if (head->next == NULL) return true;

             // find middle 
            ListNode *middle = getMid(head);

             // reverse half after middle 
            ListNode *temp = middle->next;
            middle->next = reverse(temp);

             // now compare both part 
            ListNode *head1 = head;
            ListNode *head2 = middle->next;
            while (head2 != NULL)
            {
                if (head1->val != head2->val)
                {
                    return false;
                }
                head1 = head1->next;
                head2 = head2->next;
            } 
            
            return true;
        }
};