class Solution
{
    public:
        int mostWordsFound(vector<string> &sentences)
        {
            int count = 0;
            int ans = INT_MIN;
            cout << ans << endl;

            for (int i = 0; i < sentences.size(); i++)
            {
                for (int j = 0; j < sentences[i].size(); j++)
                {
                    if (sentences[i][j] == ' ')

                    {
                        count++;
                    }
                }
                ans = max(count + 1, ans);

                count = 0;
            }
            return ans;
        }
};