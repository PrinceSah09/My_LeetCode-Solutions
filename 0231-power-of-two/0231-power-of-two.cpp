class Solution {
public:
    bool isPowerOfTwo(int n) {
 if(n<=0) return false;       if(__builtin_popcount(n)==1){
            return true;
        }
        else{return false;};
    }
}; 