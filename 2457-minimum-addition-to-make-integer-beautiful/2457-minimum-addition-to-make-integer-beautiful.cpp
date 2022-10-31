class Solution
{
    public:
        long long makeIntegerBeautiful(long long n, int target)
        {
            vector < long long > v;
            long long N;
            int sum = 0;
            N = n;
            while (N)
            {
                int dig = N % 10;
                sum += dig;
                v.push_back(dig);	/// creating digit array
                N /= 10;
            }

            for (int i = 0; i < v.size(); i++)	/// as it is reverse of the actual number, so start from i = 0
            {
                if (sum <= target) break;
                sum -= v[i];	/// this because we are making current digit 0
                v[i] = 0;
                if (i + 1 < v.size()) v[i + 1]++;	/// and next digit increase by 1
                else v.push_back(1);	/// if current position is the last digit hence doing so
                sum += 1;
            }
            long long NUM = 0;
            for (int i = v.size() - 1; i >= 0; i--)
            {
                NUM = NUM *10 + v[i];	/// converting array to number
            }
            return NUM - n;
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