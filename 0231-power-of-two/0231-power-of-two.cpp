class Solution {
public:
    bool isPowerOfTwo(int n) {
        // Base Case
        if(n<1)return false;
        if(n==1) return true;
        
        if(n%2==1)return false;
        
        return isPowerOfTwo( n/2);
    }
};