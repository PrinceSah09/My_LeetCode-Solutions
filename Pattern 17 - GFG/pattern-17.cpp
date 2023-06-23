//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        for(int i=1;i<=n;i++){
            
            //for left side
            for(int j=1;j<=(n-i);j++){
                cout<<" ";
            }
            for(char k='A';k<='A'+i-1;k++){
                cout<<k;
            }
                  
            //for right side
            // for(char k= n +'A'-1; k>='A'+i; k--){
            //     cout<<k;
            // }
            if(i>1){
                for(char j=('A'+i)-2;j>='A';j--){
                    cout<<j;
                }
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