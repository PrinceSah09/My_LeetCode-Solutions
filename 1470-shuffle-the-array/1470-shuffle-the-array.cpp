class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>m;
        vector<int>j;
        vector<int>ans;
        for(int i=0;i<n;i++)m.push_back(nums[i]);
        for(int i=n;i<(2*n);i++)j.push_back(nums[i]);
        int x=0,y=0;
        while(!m.empty()){
            ans.push_back(m[x++]);
            ans.push_back(j[y++]);
            m.pop_back();
        }
        return ans;
    }
};