class Solution
{
    public:
        int findDuplicate(vector<int> &nums)
        {
           	// sort(nums.begin(), nums.end());
           	// for (int i = 1; i < nums.size(); i++)
           	// {
           	//     if (nums[i] == nums[i - 1])
           	//         return nums[i];
           	// }
           	// return -1

            map<int, int> m;
            int ans;
            for (int i = 0; i < nums.size(); i++)
            {
                m[nums[i]]++;
            }
            for (int i = 0; i < nums.size(); i++)
            {
                if (m[nums[i]]>1)
                {
                    ans = nums[i];
                }
            }
            return ans;
        }
};