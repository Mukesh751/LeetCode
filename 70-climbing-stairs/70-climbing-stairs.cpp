class Solution {
public:
    
    int dp[50];
    
    int solve(int n, int i)
    {
        if(i==n)
            return 1;
        if(i>n)
            return 0;
        
        if(dp[i]!=-1)
            return dp[i];
        
        int one ;
        if(dp[i+1]!=-1)
            one=dp[i+1];
        else{
            one =  solve(n,i+1);
            dp[i+1] = one;
        }
        int two ;
        if(dp[i+2]!=-1)
            two = dp[i+2];
        else
        {
            two =  solve(n,i+2);
            dp[i+2] = two;
        }
        
        int ans = one + two ;
        return dp[i]=ans;
    }
    
    int climbStairs(int n) {
        memset(dp,-1,sizeof(dp));
        return solve(n,0);
    }
};