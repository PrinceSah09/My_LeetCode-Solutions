class Solution
{
    public:
        bool containsNearbyDuplicate(vector<int> &nums, int k)
        {
            map<int, int> m;
            for (int i = 0; i < nums.size(); i++)
            {

                if (m.count(nums[i]))
                {
                    if (abs(m[nums[i]] - i) <= k)
                        return true;
                }
                m[nums[i]] = i;
            }
            return false;
        }
};

// class Solution
// {
//     public:
//         bool containsNearbyDuplicate(vector<int> &nums, int k)
//         {
//             for (int i = nums.size() - 1; i >= 0; i--)
//             {
//                 for (int j = 0; j < i; j++)
//                 {
//                     if (nums[i] == nums[j] && (i != j) && abs(i - j <= k))
//                     {
//                         return true;
//                     }
//                 }
//             }
//             return false;
//         }
// };