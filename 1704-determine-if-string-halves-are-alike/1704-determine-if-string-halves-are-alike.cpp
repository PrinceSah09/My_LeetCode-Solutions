class Solution
{
    public:

       	// Function for checking wether given character is vowel or not.

        bool isvowel(char x)
        {
            if (x == 'a' || x == 'i' || x == 'e' || x == 'o' || x == 'u' ||
                x == 'A' || x == 'I' || x == 'E' || x == 'O' || x == 'U') return true;
            return false;
        }

    bool halvesAreAlike(string s)
    {
       	//Creating some variable for simplicity :)

       	// n for size of string
       	// v1 for count vowel in first half string
       	// v2 for count vowel in second half string
        int n = s.length(), v1 = 0, v2 = 0;

        /* In this for loop we have two pointer i and j;
        Lets we have ("AbCdEfGh") size = 8, i starting from 0th index and ending at leass then size/2 (not<=) and 
        j pointer is starting from n/2 (8/2 = 4th index ('E') and ending at string of size 
        */
        for (int i = 0, j = (n / 2); i < (n / 2) - 1, j < n; i++, j++)
        {
           	// if the input char is vowel then we increment value of v1 and v2 
            if (isvowel(s[i])) v1++;
            if (isvowel(s[j])) v2++;
        }
        
        // if v1 is equal to v2 then return true else return false
        if (v1 == v2) return true;
        return false;
    }
};