//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        stack<char>st;
        st.push(S[0]);
        for(int i=1;i<S.size();i++){
            if(st.top()!=S[i]){
                st.push(S[i]);
            }
        }
        S.clear();
        while(!st.empty()){
            S.push_back(st.top());
            st.pop();
        }
        reverse(S.begin(),S.end());
        return S;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 




// } Driver Code Ends