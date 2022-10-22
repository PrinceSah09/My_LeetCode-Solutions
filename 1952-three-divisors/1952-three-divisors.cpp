// class Solution
// {
//     public:
//         bool isThree(int n)
//         {
//             int count = 0;
//             for (int i = 1; i <= n; i++)
//             {
//                 if (n % i == 0) count++;
//             }
//             return 1 ? (count == 3) : 0;
//         }

// };

class Solution
{

    public:
        bool isThree(int n)
        {
            int count = 0;
            for (int i = 1; i <= n; i++)
            {
                if (n % i == 0)
                    count++;
               	//there is no need to count more than 4    
                if (count > 3)
                    break;
            }
            return count == 3;
        }
};