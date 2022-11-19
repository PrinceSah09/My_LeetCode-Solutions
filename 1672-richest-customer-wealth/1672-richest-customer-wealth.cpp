 class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int mx=INT_MIN;
        int size =  accounts.size();
        for(int i=0;i<size;i++){
        int sum=0;
            for(int j=0;j<accounts[i].size();j++) sum+=accounts[i][j];
            mx=max(sum,mx); 
        }
        return mx;
    }
};