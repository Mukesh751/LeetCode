class Solution {
public:
    int dp[105][105];
    
    int solve(vector<vector<int>>& v, int i, int j)
    {
        if(i==v.size()-1 && j==v[0].size())
            return 1;
        
        if(i>=v.size() || j>=v[0].size() || v[i][j]==1)
            return 0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int r;
        if(dp[i][j+1]!=-1)
            r = dp[i][j+1];
        else
        {
            r = solve(v,i,j+1);
            dp[i][j+1] = r;
        }
        int b;
         if(dp[i+1][j]!=-1)
            b = dp[i+1][j];
        else
        {
            b = solve(v,i+1,j);
            dp[i+1][j] = b;
        }
        
        int ans = r + b;
        dp[i][j]=ans;
        return ans;
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        memset(dp,-1,sizeof(dp));
        return solve(obstacleGrid,0,0);
    }
};