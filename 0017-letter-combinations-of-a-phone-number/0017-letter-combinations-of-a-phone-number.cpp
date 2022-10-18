class Solution
{
    public:

        void get(string digits, int index, string output, string mapping[], vector<string> &ans)
        {

           	//Base case
            if (index >= digits.length())
            {
                ans.push_back(output);
                return;
            }

            int number = digits[index] - '0';
           	//data fetch from mapping
            string value = mapping[number];

            for (int i = 0; i < value.length(); i++)
            {
                output.push_back(value[i]);
                get(digits, index + 1, output, mapping, ans);

                output.pop_back();
            }
        }

    vector<string> letterCombinations(string digits)
    {
        vector<string> ans;
        if(digits.length()==0)return ans;
        string mapping[10] = { "",
            "",
            "abc",
            "def",
            "ghi",
            "jkl",
            "mno",
            "pqrs",
            "tuv",
            "wxyz" };

         
        string output = "";
        int index = 0;
        get(digits, index, output, mapping, ans);
        return ans;
    }
};