class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        
        // sort the vector first
        sort(arr.begin(),arr.end());
        int it = arr[1]-arr[0];
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i+1]-arr[i]!=it){
                return false;
            }
        }
        return true;
    }
};
 