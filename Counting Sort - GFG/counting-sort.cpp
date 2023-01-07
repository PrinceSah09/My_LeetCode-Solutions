//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
#define RANGE 255


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    
    string countSort(string arr){
        // creating a empty vector
        vector<int>count(26,0);
        
        // Traverse through the string and collect its occurance
        for(int i=0;i<arr.length();i++){
            count[arr[i]-'a']++;
        }
        
        
        // Store Running sum of string
        for(int i=1;i<26;i++){
            count[i]+=count[i-1];
        }
        
        // Create an empty string 
        string ans(arr.length(),' ');
        
        // Traverse the vector and put their value
        for(int i=0;i<arr.size();i++){
            int x  = --count[arr[i]-'a'];
            ans[x] = arr[i];
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr;
        cin>>arr;
        Solution obj;
        cout<<obj.countSort(arr)<<endl;
    }
    return 0;
}

// } Driver Code Ends