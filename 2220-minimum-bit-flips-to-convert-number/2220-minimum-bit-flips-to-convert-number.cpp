 class Solution
 {
     public:
         int countSetBits(int n)
         {
              return __builtin_popcount(n);
         }

     int minBitFlips(int start, int goal)
     {
         return countSetBits(start ^ goal);
     }
 };