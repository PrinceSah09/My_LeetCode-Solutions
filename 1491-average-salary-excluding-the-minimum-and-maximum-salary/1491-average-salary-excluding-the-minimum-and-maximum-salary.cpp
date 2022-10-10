class Solution {
public:
    double average(vector<int>& salary) {
        double cnt=0;
        double sum=0;
        sort(salary.begin(),salary.end());
        for(int i=1;i<salary.size()-1;i++){
            cnt++;
            sum+=salary[i];
        }
        return sum/cnt;
    }
};