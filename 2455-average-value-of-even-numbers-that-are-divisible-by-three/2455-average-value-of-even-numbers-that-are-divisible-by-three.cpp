class Solution
{
    public:
        int averageValue(vector<int> &nums)
        {
            int cnt = 0, sum = 0;
            for (int it: nums)
            {
                if (it % 6 == 0)
                {
                    cnt++;
                    sum += it;
                }
            }
            return cnt ? (sum / cnt) : 0;
        }
};