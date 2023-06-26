//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public: 
    string armstrongNumber(int n){ 
        int temp=n;
        int x = 0;
        while(n){
            int dig = n%10;
            x = x+(dig*dig*dig);
            n/=10;
        }    
        
        
        // 153 => 0+27+125+1 => 153
        if(temp==x) {
            return "Yes";
        }
        return "No";
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
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends