class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
         int n = nums.size(), ans = 0;
        vector<vector<int>> dp(n, vector<int>(2, 0));
        
        for(int i=0; i<n; i++){
            
            dp[i][1]++;
            
            for(int j=0; j<i; j++){
                
                if(nums[i] <= nums[j]) 
                    continue;
                
                if(dp[i][0] == dp[j][0]) 
                    dp[i][1] += dp[j][1];
                
                else if(dp[i][0] < dp[j][0]) 
                    dp[i] = dp[j];
            }
            dp[i][0]++;
            ans = max(ans, dp[i][0]);
        }
        int ret = 0;
        for(int i=0; i<n; i++){
            if(dp[i][0] == ans) 
                ret += dp[i][1];
        }
        return ret;
    }
};