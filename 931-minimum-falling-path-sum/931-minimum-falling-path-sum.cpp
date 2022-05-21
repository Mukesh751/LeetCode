class Solution {
public:
    int ans = INT_MAX;
    vector<vector<int>> matrix;
    int dp[110][110];
    
    int solve (int i, int j)
    {
        if(j<0 || j>=matrix[0].size())
            return 10000;
        
        if(dp[i][j] != -10000)
           return dp[i][j];
        
        if(i==0)
            return matrix[0][j];
			
        int a = matrix[i][j] + solve(i-1,j);
        int b = matrix[i][j] + solve(i-1,j-1);
        int c = matrix[i][j] + solve(i-1,j+1);
        
        return dp[i][j] = min(a,min(b,c));
    }
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        this->matrix = matrix;
        int k = INT_MAX;
        
        for(int i=0; i<110; i++)
            for(int j=0; j<110; j++)
                dp[i][j] = -10000;
        
        for(int j = 0; j<matrix[0].size(); j++)
           k = min(k,solve(matrix.size()-1,j));
        
        return k;
    }
};