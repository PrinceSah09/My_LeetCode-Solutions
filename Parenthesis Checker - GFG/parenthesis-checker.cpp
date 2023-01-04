//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
         stack<char>st;
        for(int i=0;i<x.length();i++){
            if((x[i]=='(' || x[i]=='[' || x[i]=='{')){
                st.push(x[i]);
            }
            else{
                if(st.size()>=1){
                    char y = x[i];
                    if((y==')' && st.top()=='(') || (y=='}' && st.top()=='{') || (y==']' && st.top()=='[')){
                    st.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        if(st.empty()){
            return true;
        }
        else
        {
            return false;
        }
    
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends