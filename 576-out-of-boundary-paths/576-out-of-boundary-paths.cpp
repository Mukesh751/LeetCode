class Solution {
public:
    long long int ans = 0;
    int m,n;
    int dp[100][100][100];
    
    long long int mod = 1e9 + 7;
    
    int solve(int i, int j, int move){
        
        if(move<0)
            return 0;
        
        if(i<0 || j<0 || i>=m || j>=n){
            if(move == 0)
                return 1;
        
                return 0;
        }
        
        if(dp[i][j][move] != -1)
            return dp[i][j][move];
        
        ans = solve(i+1,j,move-1)%mod + solve(i-1,j,move-1)%mod + solve(i,j+1,move-1)%mod + solve(i,j-1,move-1)%mod;
        
        return dp[i][j][move] = ans%mod;
    }
    
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        long long int z = 0;
        this->m = m;
        this->n = n;
        memset(dp,-1,sizeof(dp));
        for(int move = 1; move<= maxMove; move++){
            z += solve(startRow, startColumn, move);
        }
        
        z = z%mod;
        
        int y = z;
        return y;
    }
};