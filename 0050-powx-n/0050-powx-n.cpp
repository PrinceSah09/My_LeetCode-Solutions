class Solution
{
    public:

        double get(double x, int n)
        {
            if (n == 0)
            {
                return 1;
            }
            if (n == 1)
            {
                return x;
            }

            double ans = get(x, n / 2);

            if (n % 2 == 0)
            {
                return ans * ans;
            }
            else
            {
                return x *ans * ans;
            }
        }
    double myPow(double x, int n)
    {

        if (n < 0)
            x = 1 / x;

        double ans = get(x, n);
        return ans;
    }
};