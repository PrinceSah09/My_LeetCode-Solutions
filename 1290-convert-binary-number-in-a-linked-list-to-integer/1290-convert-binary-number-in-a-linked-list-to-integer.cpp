class Solution
{
   	//     public:

   	//         int get(string s)
   	//         {
   	//             int dec = 0, base = 1;
   	//             int size = (int) s.length();

   	//             for (int i = size - 1; i >= 0; i--)
   	//             {
   	//                 if (s[i] == '1')
   	//                 {
   	//                     dec += base;
   	//                 }
   	//                 base *= 2;
   	//             }

   	//             return dec;
   	//         }

   	//     int getDecimalValue(ListNode *head)
   	//     {
   	//         string s;
   	//         while (head != NULL)
   	//         {
   	//             int data = head->val;
   	//             char cand = (data == 1) ? '1' : '0';
   	//             s += cand;
   	//             head = head->next;
   	//         }
   	//         int ans = get(s);
   	//         return ans;
   	//     }

    public:
        int getDecimalValue(ListNode *head)
        {
            int result = head->val;
            while (head->next)
            {
                result = result *2 + head->next->val;
                head = head->next;
            }
            return result;
        }
};