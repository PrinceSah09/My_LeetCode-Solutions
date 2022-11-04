class Solution
{
    public:
        int findMaxK(vector<int> &nums)
        {
           	// sort the numbers O(nlogn)
            sort(nums.begin(), nums.end());
            int l = 0, h = nums.size() - 1;
            while (l < h)
            {
                int sum = nums[l] + nums[h];
               	// if sum is zero we have found our answer
                if (sum == 0)
                    return nums[h]; 
                else if (sum > 0)
                {
                    h--;
                }
                else
                {
                    l++;
                }
            } 
            return -1;
        }
    
};   //  => TC (Nlog N) 
   

 

   	// class Solution
   	// {
   	//     public:
   	//         int findMaxK(vector<int> &nums)
   	//         {
   	//             int ans = -1;
   	//             sort(nums.begin(), nums.end());
   	//             for (int i = 0; i < nums.size(); i++)
   	//             {
   	//                 for (int j = i+1; j < nums.size(); j++)
   	//                 {
   	//                     if (nums[i] != 0 && nums[i] == -(nums[j]))  ans = max(ans, nums[j]); 
   	//                 }
   	//             }
   	//             return ans;
   	//         }
   	// };

     //  => TC (N)^2        