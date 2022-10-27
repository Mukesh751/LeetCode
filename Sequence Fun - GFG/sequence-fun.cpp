//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
#include<vector>
class Solution {
	public:
	    vector<long long> v;
	    bool flag = true;
	    int mod = 1e9 + 7;
		int NthTerm(int n){
		    // Code  here
		    if(flag){
		        flag = false;
		        long long size = 2;
		        v.push_back(0);
		        v.push_back(2);
		        long long i = 2;
		        while(size<10005){
		            long long k = v.back();
		            k*=i;
		            k++;
	                k = k%mod;
		            v.push_back(k);
		            i++;
		            size++;
		        }
		    }
		    return v[n];
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution obj;
		int ans = obj.NthTerm(n);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends