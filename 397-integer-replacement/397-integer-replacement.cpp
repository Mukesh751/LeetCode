class Solution {
public:
    int ans = INT_MAX;
    
    void solve(long long int n, int k){
        if(n==1){
            ans = min(ans,k);
            return;
        }
        if(n%2 == 0)
            solve(n/2,k+1);
        else
        {
            
            solve(n-1,k+1);
            solve(n+1,k+1);
        }
    }
    int integerReplacement(int n) {
        solve(n,0);
        return ans;
    }
};