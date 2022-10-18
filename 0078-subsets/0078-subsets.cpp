class Solution
{
    public:
        void solve(vector<int> nums, vector<vector< int >> &ans, int index, vector< int > output)
        {
           	// bse case
            if (index >= nums.size())
            {
                ans.push_back(output);
                return;
            }

           	//exclude
            solve(nums, ans, index + 1, output);

           	//include
            int element = nums[index];
            output.push_back(element);
            solve(nums, ans, index + 1,output);
        }

    vector<vector < int>> subsets(vector<int> &nums)
    {
        vector<vector < int>> ans;
        vector<int> output;
        int index = 0;

        solve(nums, ans, index, output);
        return ans;
        
    }
};