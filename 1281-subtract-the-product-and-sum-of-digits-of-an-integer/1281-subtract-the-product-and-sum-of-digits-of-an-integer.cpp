class Solution {
public:
    int subtractProductAndSum(int n) {
        int prd=1,sum=0;
        while(n){
            prd *= n%10;
            sum += n%10;
            
            n /= 10;
        }
        return prd-sum;
    }
};