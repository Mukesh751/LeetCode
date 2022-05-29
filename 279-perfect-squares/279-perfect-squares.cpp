class Solution {
public:
    vector<int> v;
    int num = 0;
    int dp[10006][150];
    int solve (int n, int i)
    {
        if(n<0 || i>=v.size())
            return num;
        
        if(n==0)
            return 0;
        
        if(dp[n][i] != -1)
            return dp[n][i];
        
        int pick = 1 + solve(n-v[i], i);
        int notpick = solve(n,i+1);
        
        return dp[n][i] = min(pick,notpick);
    }
    
    int numSquares(int n) {
    
        num = n;
        memset(dp,-1,sizeof(dp));
        for(int i = 1; i*i<=n; i++)
        v.push_back(i*i);
    
    return solve(n,0);
    }
};