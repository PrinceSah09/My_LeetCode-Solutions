class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) { 
        int count=0;
        int maxx=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                maxx = max(count,maxx);
            }
            else{
                count=0;
            }
        }
        return maxx;
    }
};