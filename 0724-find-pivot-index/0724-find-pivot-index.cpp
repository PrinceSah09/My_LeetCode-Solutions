 class Solution
 {
     public:
         int pivotIndex(vector<int> &nums)
         {
             int sum = 0, i = 0;
             for (int num: nums)
             {
                 sum += nums[i++];
             }
             
             
             int lsum = 0, rsum = sum;
             
             for (int i = 0; i < nums.size(); i++)
             {
                 rsum = rsum - nums[i];
                 if (lsum == rsum)
                 {
                     return i;
                 }
                 lsum += nums[i];
             }
             return -1;
         }
     //https://www.youtube.com/watch?v=AH-YhFNJoas
 };