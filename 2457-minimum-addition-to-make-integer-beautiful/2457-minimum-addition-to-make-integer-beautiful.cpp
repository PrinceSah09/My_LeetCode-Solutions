class Solution
{
    public:

        long long digitsum(long long n)
        {
            long long sum = 0;
            while (n)
            {
                sum = sum + (n % 10);
                n = n / 10;
            }
            return sum;
        }

    long long makeIntegerBeautiful(long long n, int target)
    {
        if (digitsum(n) <= target) return 0;
        
        long long count = 10;
        long long temp = n;
        while (digitsum(temp) > target)
        {
            long long mod = n % count;
            temp = n + count - mod;

            count *= 10;
        }
        return temp - n;
    }
};

// class Solution
// {
//     public:
//         int digsum(long long n)
//         {
//             int sum = 0;
//             while (n)
//             {
//                 sum += (n % 10);
//                 n /= 10;
//             }
//             return sum;
//         }

//    	//     long long get(long long n,int target,int count){

//    	//        	//Base case
//    	//	//         if(digsum(n)<=target)return count;

//    	//	//        return get(n+1,target,count+1);
//    	//     }

//     long long makeIntegerBeautiful(long long n, int target)
//     {

//        	// int count=0;
//        	//  return  get(n,target, count); 

//         int ans = 0;
//         int count = 0;

//         for (long long i = 0;; i++)
//         {
//             if (digsum(n) <= target) return i;
//             else
//             {
//                 n++;

//                 count++;
//                 if (digsum(n) <= target)
//                 {
//                     ans = count;
//                     break;
//                 }
//             }
//         }
//         return count;
//     }
// };