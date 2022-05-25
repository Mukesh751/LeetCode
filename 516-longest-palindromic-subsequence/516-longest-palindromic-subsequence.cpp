class Solution {
public:
      int dp[1001][1001];
    int lcs(string &x, string &y, int m, int n)
    {
        if(m==0 || n==0)
            return 0;
        if(dp[m][n]!=-1)
            return dp[m][n];
         if(x[m-1]==y[n-1])
            return dp[m][n]=lcs(x,y,m-1,n-1)+1;
        
          return dp[m][n]=max(lcs(x,y,m,n-1), lcs(x,y,m-1,n));
    } 
    int longestPalindromeSubseq(string s) {
        int n = s.size();
        string str = s;
        reverse(s.begin(),s.end());
        int m = s.size();
        memset(dp,-1,sizeof(dp));
        return lcs(str,s,n,m);
    }
};