//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
string solve(int &i, string &s) {
	string result;
	while(i < s.size() && s[i] != ']') {
		if(s[i] >= 'a' && s[i] <= 'z')
			result += s[i++];
		else {
			int n = 0;
			while(s[i] >= '0' && s[i] <= '9')
				n = n * 10 + s[i++] - '0';
			i++;
			string str = solve(i, s);
			for(int j = 0; j < n; j++)
				result += str;
			i++;
		}
	}
	return result;
}
    string decodedString(string s){
        // code here
        int i = 0;
        return solve(i,s);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends