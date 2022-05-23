class Solution {
public:
    vector<string> v;
    int ans = 0;
    int dp[700][105][105];
    int solve (int i, int m, int n)
    {
        if(i<0)
            return 0;
        
        if(dp[i][m][n]!=-1)
          return dp[i][m][n];
        
        string s = v[i];
        int ones = 0;
        int zeroes = 0;
        for(int j=0; j<s.size(); j++)
            if(s[j]=='0')
                zeroes++;
            else
                ones++;
        
        int a = 0;
        if(zeroes<=m && ones<=n)
         a = 1 + solve(i-1,m-zeroes,n-ones);
        
        int b = solve(i-1,m,n);
        
        ans = max(a,b);
        return dp[i][m][n] = ans;
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        v = strs;
        memset(dp,-1,sizeof(dp));
        return solve(strs.size()-1,m,n);
    }
};