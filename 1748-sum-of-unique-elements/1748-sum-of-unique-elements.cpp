class Solution
{
    public:
        int sumOfUnique(vector<int> &nums)
        {
           	//using map
            map<int, int> m;
            for (int i = 0; i < nums.size(); i++)
            {
                m[nums[i]]++;
            }
           	//finding sum of unique element 
           	//means a element having 1 occurance only
            int sum = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                if (m[nums[i]] == 1) sum += nums[i];
            }
            return sum;
        }
};