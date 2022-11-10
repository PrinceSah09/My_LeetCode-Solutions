class Solution
{
    public:
        int countOdds(int low, int high)
        {
            int x = (high - low) / 2;
            if ((low % 2 == 1) || (high % 2 == 1)) ++x;
            return x;
        }
};