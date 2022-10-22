class Solution {
public:
     int findGCD(vector<int>& nums) {
        //sort(nums.begin(), nums.end());
        int minimum = nums[0], maximum = nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            minimum = min(minimum, nums[i]);
            maximum = max(maximum, nums[i]);
        }
        
        int gcd = 1;
        for(int i=1; i<=minimum; i++)
        {
            if(minimum % i==0 && maximum%i ==0)
                gcd = i;
        }
        return gcd;
    }
};