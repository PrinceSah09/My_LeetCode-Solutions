 class Solution
 {
     public:
         int longestContinuousSubstring(string s)
         {
             int mx = 1;
             int count = 1;
             for (int i = 0; i < s.length(); i++)
             {
                 if (s[i + 1] - s[i] == 1) count++;
                 else
                 {
                     count = 1;
                 }
                 mx = max(mx, count);
             }
             return mx;
         }
 };