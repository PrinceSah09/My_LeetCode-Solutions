class Solution {
public:
    string makeGood(string s) { 
        vector<char> v; 
        for (auto currChar : s) {
            // If the current character make a pair with the last character in the stack,
            // remove both of them. Otherwise, we add the current character to stack.
            if (!v.empty() && abs(v.back() - currChar) == 32)
                v.pop_back(); 
            else
                v.push_back(currChar);
        }
        
        // Returns the string concatenated by all characters left in the stack.
        string ans(v.begin(), v.end());
        return ans;
    }
};