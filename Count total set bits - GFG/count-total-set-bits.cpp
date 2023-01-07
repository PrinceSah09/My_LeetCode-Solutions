//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    
    // Function for finding max element containing only one bits
    int getMaxBit(int n){
        int count=0;
        while((1<<count)<=n){
            count++;
        }
        return count-1;
    }
    
    int countSetBits(int n)
    {
        // Base Case
        if(n==0)return 0;
        
        int x = getMaxBit(n);
        int CountBitPower2 = x * (1<<(x-1));
        int CountBitAfterPow2 = n - ((1<<x)-1);
        int rest = n-(1<<x);
        
        return CountBitPower2 + CountBitAfterPow2 + countSetBits(rest);
        
    }
    
    
    // YT : https://www.youtube.com/watch?v=g6OxU-hRGtY&ab_channel=Pepcoding
};


//{ Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}

// } Driver Code Ends