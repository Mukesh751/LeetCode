class Solution {
public:
    int getMaximumGenerated(int n) {
       if(n == 0 || n==1)
           return n;
        vector<int> dp(n+1,0);
        dp[1] = 1;
        int mx = 1;
        for(int i = 2; i<n+1; i++){
            if(i%2 == 0)
                dp[i] = dp[i/2];
            else
                dp[i] = dp[i/2] + dp[(i+1)/2];
            
            mx = max(dp[i],mx);
        }
        return mx;
    }
};