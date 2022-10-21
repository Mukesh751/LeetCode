//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int mod = 1e8;
    long long rec(int n, vector<int>& dp){
        if(n<0)
         return 0;
        if(n == 0)
         return 1;
        
        if(dp[n] != -1)
         return dp[n];
         
        return dp[n] = (rec(n-1,dp)%mod + rec(n-2,dp)%mod)%mod;
    }
    int fillingBucket(int N) {
        // code here
        vector<int> dp(N+2,-1);
        return rec(N,dp)%mod;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.fillingBucket(N) << endl;
    }
    return 0;
}
// } Driver Code Ends