//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        //creating a map
        map<int,int>mp;
        for(int it: nums)mp[it]++;
        
        //creating priority queue pair 
        priority_queue<pair<int,int>>pq;
        for(auto it: mp){
            pair<int,int>p;
            p.first = it.second;
            p.second = it.first;
            pq.push(p);
        }
        
        vector<int>v;
        while(k--){
            if(!pq.empty()){
                v.push_back(pq.top().second);
                pq.pop();
            }
        }
        return v;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends