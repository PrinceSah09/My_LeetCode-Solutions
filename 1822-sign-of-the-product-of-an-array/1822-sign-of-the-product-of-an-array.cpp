class Solution
{
    public:
        int arraySign(vector<int> &nums)
        {
            int sign = 1;
            for (auto n: nums)
            {
                if (n == 0) return 0;
                sign = sign * n > 0 ? 1 : -1;
            }
            return sign;
        }
};