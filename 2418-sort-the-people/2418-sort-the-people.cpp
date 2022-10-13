 class Solution
 {
     public:
         vector<string> sortPeople(vector<string> &names, vector<int> &heights)
         {
             vector<pair<int, string>> v;
             
             int n = names.size();
             
             for (int i = 0; i < n; i++) v.push_back({ heights[i],
                 names[i] });

             //sorting part
             sort(v.rbegin(), v.rend());

             for (int i = 0; i < n; i++)
             {
                 names[i] = v[i].second;
             }

             return names;
         }
 };