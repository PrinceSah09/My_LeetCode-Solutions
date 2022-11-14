 class Solution
 {
     public:
         int subtractProductAndSum(int n)
         {
             int dig;
             int sum = 0, mul = 1;
             while (n)
             {
                 dig = n % 10;
                 sum += dig;
                 mul *= dig;
                 n = n / 10;
             }
             return mul - sum;
         }
 };