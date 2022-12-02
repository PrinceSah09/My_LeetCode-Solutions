class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        string x = s;
        for(int i=0;i<x.length();i++){
            if(x[i]=='{' || x[i]=='(' || x[i]=='['){
                st.push(x[i]);
            }
                if(st.empty()){
                    return false;
                }
            else if(x[i]=='}'){
                if(st.top()=='{'){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else if(x[i]==']'){
                if(st.top()=='['){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else if(x[i]==')'){
                if(st.top()=='('){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
        
    }
};