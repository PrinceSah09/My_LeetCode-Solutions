class Solution {
public:
    int minPartitions(string n) {
        int ans =0 ;
        for(char c:n){
            int dig = c-48;
            ans = max(ans,dig);
        }
        return ans;
    }
};