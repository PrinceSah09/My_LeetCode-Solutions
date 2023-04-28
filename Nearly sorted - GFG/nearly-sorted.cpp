//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return the sorted array.
    vector <int> nearlySorted(int arr[], int num, int K){
        //Here we use Min Heap 
        priority_queue<int,vector<int>,greater<int>>MinHeap;
        vector<int>SortedArray;
        for(int i=0;i<num;i++){
            MinHeap.push(arr[i]);
            if(MinHeap.size()>K){
                SortedArray.push_back(MinHeap.top());
                MinHeap.pop();
            }
        }
        
        while(!MinHeap.empty()){
            SortedArray.push_back(MinHeap.top());
            MinHeap.pop();
        }
        return SortedArray;
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    int num, K;
	    cin>>num>>K;
	    
	    int arr[num];
	    for(int i = 0; i<num; ++i){
	        cin>>arr[i];
	    }
	    Solution ob;
	    vector <int> res = ob.nearlySorted(arr, num, K);
	    for (int i = 0; i < res.size (); i++)
	        cout << res[i] << " ";
	        
	    cout<<endl;
	}
	
	return 0;
}

// } Driver Code Ends