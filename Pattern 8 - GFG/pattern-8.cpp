//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n) {
	     //outer loop
	     for(int i=1;i<=n;i++){
	         //for printing space
	         for(int j=1;j<=(i-1);j++){
	           //  j = 1, i = 1
	           cout<<" ";
	         }
	         
	         //for ptinting star
	         for(int k=1;k<=(((n-i)*2)+1);k++){
	             cout<<"*";
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