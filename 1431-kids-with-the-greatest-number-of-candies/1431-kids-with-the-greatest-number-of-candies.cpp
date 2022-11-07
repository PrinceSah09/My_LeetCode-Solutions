class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = INT_MIN;
        for(int it:candies){
            maxi = max(it,maxi);
        } 
        vector<bool>v;
        for(int it:candies){
            if((it+extraCandies)>=maxi)v.push_back(true);
            else{
                v.push_back(false);
            }
        }
        return v;
    }
};