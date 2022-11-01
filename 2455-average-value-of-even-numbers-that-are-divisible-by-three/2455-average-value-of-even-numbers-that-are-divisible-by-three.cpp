class Solution
{
    public:
        int averageValue(vector<int> &nums)
        {
            int ans = 0 ,cnt = 0;	 
            for (int i = 0; i < nums.size(); i++)
            {  
                if (nums[i] % 6 == 0)
                {
                    ans += nums[i];
                    cnt++;
                }
            }
            if (cnt == 0) return 0;	// if no element is found return 0;
            return (ans / cnt);	// else return the average that is sum of elements divided by no. of elements
        }
};