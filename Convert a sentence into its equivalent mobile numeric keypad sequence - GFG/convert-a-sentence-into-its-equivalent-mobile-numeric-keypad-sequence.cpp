//{ Driver Code Starts
// C++ implementation to convert a
// sentence into its equivalent
// mobile numeric keypad sequence
#include <bits/stdc++.h>
using namespace std;
string printSequence(string input);
// Driver function
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
    {
        string s;
        getline(cin,s);
        cout<<printSequence(s)<<endl;
    }
	return 0;
}

// } Driver Code Ends


string printSequence(string S)
{
   unordered_map<char,string>mpp;
    mpp['A'] = "2";
    mpp['B'] = "22";
    mpp['C'] = "222";
    mpp['D'] = "3";
    mpp['E'] = "33";
    mpp['F'] = "333";
    mpp['G'] = "4";
    mpp['H'] = "44";
    mpp['I'] = "444";
    mpp['J'] = "5";
    mpp['K'] = "55";
    mpp['L'] = "555";
    mpp['M'] = "6";
    mpp['N'] = "66";
    mpp['O'] = "666";
    mpp['P'] = "7";
    mpp['Q'] = "77";
    mpp['R'] = "777";
    mpp['S'] = "7777";
    mpp['T'] = "8";
    mpp['U'] = "88";
    mpp['V'] = "888";
    mpp['W'] = "9";
    mpp['X'] = "99";
    mpp['Y'] = "999";
    mpp['Z'] = "9999";
    mpp[' '] = "0";
    string ans = "";
    for(int i=0;i<S.length();i++)
    {
        ans += mpp[S[i]];
    }
    return ans;
}