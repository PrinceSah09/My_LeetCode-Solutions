class Solution
{
    public:

        bool isvowel(char x)
        {
            if (x == 'a' || x == 'i' || x == 'e' || x == 'o' || x == 'u' ||
                x == 'A' || x == 'I' || x == 'E' || x == 'O' || x == 'U') return true;
            return false;
        }
    
    bool halvesAreAlike(string s)
    {

        int n = s.length(), v1 = 0, v2 = 0;
        for (int i = 0, j = (n / 2) ; i < (n / 2) - 1, j < n; i++, j++)
        {
            if (isvowel(s[i])) v1++;
            if (isvowel(s[j])) v2++;
        }
        
        // "AbCd EfGh"
        //  0    4
        
        if (v1 == v2) return true;
        return false;
    }
};