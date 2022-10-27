class Solution {
public:
    
    int dig(int n){
        int count=0;
        while(n){
            count++;
            n/=10;
        }
        return count;
    }
    
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(dig(nums[i])%2==0)count++;
        }
        return count;
    }
};