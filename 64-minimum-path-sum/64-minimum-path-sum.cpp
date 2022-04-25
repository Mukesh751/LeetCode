class Solution {
public:
    int dp[205][205];
    int solve(vector<vector<int>>& v, int i, int j)
    {
        if(i==v.size()-1 && j==v[0].size()-1)
            return v[i][j];
        
        if(i>=v.size() || j>=v[0].size())
            return 1000000;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int r;
        if(dp[i][j+1]!=-1)
            r=dp[i][j+1];
        else{
              r =  solve(v,i,j+1);
              dp[i][j+1] = r;
        }
        
        int b;
        if(dp[i+1][j]!=-1)
           b = dp[i+1][j];
        else{
        b = solve(v,i+1,j);
        dp[i+1][j] = b;
        }
        
        int ans;
        ans = v[i][j] + min(r,b);
        dp[i][j] = ans;
        return ans;
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof(dp));
        return solve(grid,0,0);
    }
};