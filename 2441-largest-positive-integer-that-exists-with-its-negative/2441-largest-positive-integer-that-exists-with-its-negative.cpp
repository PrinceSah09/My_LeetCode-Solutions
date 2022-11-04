class Solution
{
    public:
        int findMaxK(vector<int> &nums)
        {
            int ans = -1;
            sort(nums.begin(), nums.end());
            for (int i = 0; i < nums.size(); i++)
            {
                for (int j = i+1; j < nums.size(); j++)
                {
                    if (nums[i] != 0 && nums[i] == -(nums[j]))
                    {
                        ans = max(ans, nums[j]);
                    }
                }
            }
            return ans;
        }
};