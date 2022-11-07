class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            int x = nums[i],count=0;
            for(int j=0;j<nums.size();j++){
                if((nums[j]<x) && (i!=j))count++;
            }
            v.push_back(count);
        }
        return v;
    }
};