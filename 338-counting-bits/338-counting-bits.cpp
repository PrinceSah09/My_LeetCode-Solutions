class Solution
{
    public: 
    vector<int> countBits(int n)
    {
        int num = 0;
        vector<int> v;
        for(int i=0;i<=n;i++){ 
            v.push_back(__builtin_popcount(i));
        }
        return v;
    }
};