class Solution
{
    public:
        vector<int> getConcatenation(vector<int> &nums)
        {
            
            int size = nums.size();
            for(int i=0;i<size;i++) nums.push_back(nums[i]);
          
            return nums;
            // vector<int> ans;
            // for (int it: nums) ans.push_back(it);
            // for (int it: nums) ans.push_back(it);
            // return ans;
        }
};