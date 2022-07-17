class Solution {
public:
    int mod = 1e9 + 7;
    
    int kInversePairs(int n, int k) {
    
        if(k>n*(n-1)/2)
            return 0;
        
        if(k==0 || k==n*(n-1)/2)
            return 1;
        
        long long dp[n+1][k+1];
        
        memset(dp,0,sizeof(dp));
        
        for(int i = 1; i<n+1; i++)
            dp[i][0] = 1;
        
        dp[2][1] = 1;
        
        for(int i = 3; i<n+1; i++){
            int mx = min(k,i*(i-1)/2);
            for(int j = 1; j<mx+1; j++){
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
                
                if(j>=i)
                dp[i][j]-=dp[i-1][j-i];
                
                dp[i][j] = (dp[i][j] + mod)%mod;
            }
        }
        return dp[n][k]%mod;
    }
};