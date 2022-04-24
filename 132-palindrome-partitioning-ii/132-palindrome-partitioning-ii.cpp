class Solution {
public:
    int dp[2001][2001];
    bool isp(string& s, int i, int j)
    {
        for(; i<j; i++,j--)
            if(s[i]!=s[j])
                return false;
        return true;
    }
    int solve(string& s, int i, int j)
    {
        if(i>=j || isp(s,i,j))
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int mn = INT_MAX;
        for(int k=i; k<=j; k++)
        {
            // int l,r;
            // if(dp[i][k]!=-1)
            //     l=dp[i][k];
            // else
            // {
            //     l=solve(s,i,k);
            //     dp[i][k]=l;
            // }
            // if(dp[k+1][j]!=-1)
            //     r=dp[k+1][j];
            // else
            // {
            //     r=solve(s,k+1,j);
            //     dp[k+1][j]=r;
            // }
            
            //int temp ;
            if(isp(s,i,k))
                mn = min(mn,1+solve(s,k+1,j));
           // mn=min(mn,temp);
        }
        return dp[i][j]=mn;
    }
    int minCut(string s) {
        memset(dp,-1,sizeof(dp));
        return solve(s,0,s.size()-1);
    }
};