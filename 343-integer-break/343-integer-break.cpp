class Solution {
public:
    int num;
    int dp[100][100];
    int solve (int n, int i)
    {
        if(n<0 || i>=num)
            return -1;
        
        if(n==0)
            return 1;
        
        if(dp[n][i] != -1)
            return dp[n][i];
        
        int pick = i*solve(n-i, i);
        int notpick = solve(n,i+1);
        
        return dp[n][i] = max(pick,notpick);
    }
    int integerBreak(int n) {
        memset(dp,-1,sizeof(dp));
       num=n;
        return solve(n,1);
    }
};