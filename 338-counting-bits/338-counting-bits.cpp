class Solution
{
    public:

        int bitcount(int n)
        {
            int count = 0;
            while (n)
            {
                if ((n & 1) == 1) count++;
                n = n >> 1;
            }
            return count;
        }
    vector<int> countBits(int n)
    {
        int num = 0;
        vector<int> v;
        for(int i=0;i<=n;i++){
            int count = bitcount(i);
            v.push_back(count);
        }
        return v;
    }
};