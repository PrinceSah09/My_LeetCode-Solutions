 class Solution
 {
     public:
         int removeElement(vector<int> &nums, int val)
         {
             int  j = 0;
             if (nums.size() == 0) return 0;
             for (int i = 0; i < nums.size(); i++)
             {
                 if (nums[i] != val) 
                     nums[j++] = nums[i];  
             }
             return j;
         }
 };