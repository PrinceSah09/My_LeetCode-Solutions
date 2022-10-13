class Solution
{
    public:
        char findTheDifference(string s, string t)
        {
            char ans = 0;
            char ans1 = 0;
            for (const char c: s)
                ans ^= c;

            for (const char c: t)
                ans1 ^= c;

            return ans1^ans;
        }
};