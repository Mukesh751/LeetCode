class Solution {
public:
    int sum = INT_MIN;
    int m,n;
    int dp[1001][1001];
    vector<int> nv,mv;
    
    int recurse(int i, int l)
    {
        if(i==m)
            return 0;
        
        int r = n-1-i+l;
        if(dp[i][l]==0)
            dp[i][l] = max(mv[i]*nv[l] + recurse(i+1,l+1), mv[i]*nv[r] + recurse(i+1,l));
        
        return dp[i][l];
    }
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        
        m=multipliers.size();
        nv=nums;
        mv=multipliers;
        memset(dp,0,sizeof(dp));
        n=nums.size();
        
        return recurse(0,0);
        
    }
};