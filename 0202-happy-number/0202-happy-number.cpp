class Solution
{
    public:

       	//function for return square sum of a digit
        int help(int n)
        {
            int sum = 0;
            while (n)
            {
                int dig = n % 10;
                sum += (dig *dig);
                n /= 10;
            }
            return sum;
        }

    bool isHappy(int n)
    {
       	// applying floyd cycle detextion alogorithm
        int slow = n, fast = n;
        do {
            slow = help(slow);
            fast = help(help(fast));
        } while (slow != fast);
        return slow == 1;
    }
};