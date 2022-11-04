class Solution
{
    public:
        vector<int> getConcatenation(vector<int> &nums)
        {
            vector<int> ans;
            for (int it: nums) ans.push_back(it);
            for (int it: nums) ans.push_back(it);
            return ans;
        }
};