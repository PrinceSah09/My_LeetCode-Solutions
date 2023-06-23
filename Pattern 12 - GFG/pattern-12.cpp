//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        for(int i=1;i<=n;i++){
            
            //for left side
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
            //printing a space
            for(int k=1;k<=n-i;k++){
                cout<<"  ";
            }
        
            
            
            //for right side
            
            //pritning space
            for(int j=1;j<=(n-i);j++){
                cout<<"  ";
            }
            //printing number
            for(int k=i; k>=1;k--){
                cout<<k<<" ";
            }
            cout<<endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends