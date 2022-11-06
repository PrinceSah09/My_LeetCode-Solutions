class Solution
{
    public:
        vector<int> applyOperations(vector<int> &nums)
        {
            int n = nums.size() - 1;
            for (int i = 0; i < n;)
            {
                if (nums[i] == nums[i + 1])
                {
                    nums[i] = nums[i] *2;
                    nums[i + 1] = 0;
                    i = i + 1;
                }
                i++;
            }
            int i = 0;
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[j] != 0)
                {
                    swap(nums[j], nums[i]);
                    i++;
                }
            }
            return nums;
        }
};