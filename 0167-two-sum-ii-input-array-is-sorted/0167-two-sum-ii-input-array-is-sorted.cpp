class Solution
{
    public:
        vector<int> twoSum(vector<int> &numbers, int target)
        {
           	//creating a new vector
            vector<int> v;

           	// creating two pointer
            int s = 0, e = numbers.size() - 1;

            while (s < e)
            {
                if (numbers[s] + numbers[e] == target)
                {
                    v.push_back(s + 1);
                    v.push_back(e + 1);
                    break;
                }
                else if (numbers[s] + numbers[e] < target)
                {
                    s++;
                }
                else
                {
                    e--;
                }
            }
            return v;
        }
};