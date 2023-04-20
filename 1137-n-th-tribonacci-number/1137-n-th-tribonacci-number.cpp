class Solution {
public:
    int tribonacci(int n) {
        long a = 0,b=1,c=1,d=2;
        for(int i=0;i<n;i++){
            a=b;
            b=c;
            c=d;
            d=a+b+c;
        }
        return a;
    }
};