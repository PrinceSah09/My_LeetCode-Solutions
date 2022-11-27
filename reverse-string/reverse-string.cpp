class Solution {
public:
    void reverseString(vector<char>& s) {
        int y=0,e=s.size()-1;
        while(y<e){
            swap(s[y++],s[e--]);
        }
    }
};