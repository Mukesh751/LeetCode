class Solution {
public:
    string s,t;
    int dp[1005][1005];
    int solve(int i, int j, int count = 0){
        
        if(count == t.size())
            return 1;
        
        if(i == s.size() || j == t.size() || t.size() - j > s.size() - i)
            return 0;
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        int res = 0;
        for(int k = i; k < s.size(); k++){
            if(s[k] == t[j])
                res += dp[k+1][j+1] = solve(k+1, j+1,count+1); 
        }
        return dp[i][j] = res;
    }
    int numDistinct(string s, string t) {
        this->s = s;
        this->t = t;
        memset(dp,-1,sizeof(dp));
        return solve(0,0);
    }
};