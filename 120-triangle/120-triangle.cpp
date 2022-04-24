class Solution {
public:
    int sum=0;
    int dp[300][30000];
    int recurse(vector<vector<int>>& triangle, int row ,int i)
    {
       if(row == triangle.size() || i>=triangle[row].size())
           return 0;
        
        if(dp[row][i]!=-1)
            return dp[row][i];
        
        int l = triangle[row][i] + recurse(triangle,row+1,i);
        int r = triangle[row][i] + recurse(triangle,row+1,i+1);
        sum = min(l,r);
        
        dp[row][i]=sum;
        
        return sum;
    }
    
    int minimumTotal(vector<vector<int>>& triangle) {
        memset(dp,-1,sizeof(dp));
        return recurse(triangle, 0, 0);
    }
};