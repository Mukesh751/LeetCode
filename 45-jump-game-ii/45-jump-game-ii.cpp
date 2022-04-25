class Solution {
public:
    int dp[100005];
    int recurse(vector<int>&nums, int i)
    {
        if(i>=nums.size()-1)
            return 0;
        
        if(nums[i]==0)
            return 1e6;
        
        if(dp[i]!=-1)
            return dp[i];
        
        int ans=INT_MAX;
        for(int j=1; j<=nums[i];j++)
        {
            int temp = 1 + recurse(nums,i+j);
            ans = min(temp,ans);
        }
        return dp[i]=ans;
    }
    
    int jump(vector<int>& nums) {
        
        memset(dp,-1,sizeof(dp));
        return recurse(nums,0);
    }
};