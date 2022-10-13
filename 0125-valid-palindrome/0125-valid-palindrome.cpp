 class Solution
 {
     public:
         bool isPalindrome(string s)
         {
            	//make new string
             string load = "";
             for (int i = 0; i < s.size(); i++)
             {
                 if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
                 {
                     load += s[i];
                 }
             }
            	//load is filled with all char
            	//transform all char inside load in lowercase
             transform(load.begin(), load.end(), load.begin(), ::tolower);
            	//just simply check palindrome
             int i = 0, j = load.size() - 1;
             while (i <= j)
             {
                 if (load[i++] != load[j--]) return false;
             }
             return true;
         }
 };