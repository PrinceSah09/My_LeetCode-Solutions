 class Solution
 {
     public:
         bool containsDuplicate(vector<int> &nums)
         {
             map<int,int>m;
             for(int i=0;i<nums.size();i++){
                 m[nums[i]]++;
             }
             
             for(int i=0;i<nums.size();i++){
                 if(m[nums[i]]>=2)return true;
             }
             
             return false;
         }
 };