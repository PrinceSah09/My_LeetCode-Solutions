class Solution
{
    public:
        int maxProfit(vector<int> &prices)
        {
            int profit = 0, ibuy = 0;
            for (int i = 1; i < prices.size(); i++)
            {
                if (prices[ibuy] > prices[i])
                {
                    ibuy = i;
                }
                profit = max(profit, prices[i] - prices[ibuy]);
            }
            return profit;
        }
};
 