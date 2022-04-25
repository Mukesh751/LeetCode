class Solution {
public:
    int dp[105][105];
    int mm,nn;
    
    int solve(int i, int j)
    {
        if(i==mm-1 && j==nn-1)
            return 1;
        
        if(i>=mm || j>=nn)
            return 0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int ans = 0;
        
        int r ;
        if(dp[i][j+1]!=-1)
            r=dp[i][j+1];
        else
        {
            r=solve(i,j+1);
            dp[i][j+1]=r;
        }
        
         int b ;
        if(dp[i+1][j]!=-1)
            b=dp[i+1][j];
        else
        {
            b=solve(i+1,j);
            dp[i+1][j]=b;
        }
        
        ans = r + b;
        
        return ans;
    }
    int uniquePaths(int m, int n) {
        mm=m;
        nn=n;
        memset(dp,-1,sizeof(dp));
        return solve(0,0);
    }
};