class Solution {
public:
     int dp[100];
    int r (int n)
    {
        if(n==3)
            return 2;
        if(n == 2 || n==1)
            return 1;
        if(n==0)
            return 0;
        if(dp[n]!=-1)
            return dp[n];
        
       dp[n-1] = r(n-1);
        dp[n-2] = r(n-2);
        dp[n-3] = r(n-3);
        
        return dp[n-1] + dp[n-2] + dp[n-3];
    }
    int tribonacci(int n) {
    memset(dp,-1,sizeof(dp));
        return r(n);
    }
};