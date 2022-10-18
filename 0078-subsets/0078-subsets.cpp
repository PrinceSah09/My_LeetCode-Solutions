class Solution {
public:
    
    
    void solve(vector<int>nums,vector<vector<int>>&badka, vector<int>chotka, int index ){
        //Base Case
        if(index>=nums.size()){
            //badka vector me chotka dal denaa
            badka.push_back(chotka);
            return;
        }
        
        //Exclude
        solve(nums,badka,chotka,index+1);
        
        //Include
        int cand = nums[index];
        chotka.push_back(cand);
        solve(nums,badka,chotka, index+1);
        
    }
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        // create badka vector
        vector<vector<int>>badka;
        
        //create chotka for operation
        vector<int>chotka;
        
        //make recursive call
        int index = 0;
        solve(nums,badka,chotka,index);
        return badka;
    }
};