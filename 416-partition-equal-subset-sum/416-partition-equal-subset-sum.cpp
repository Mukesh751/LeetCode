class Solution {
public:
    int dp[20005][205];
    bool ans = false;
    int sum = 0;
     bool solve(vector<int>& nums,int sum,int n){
       
        if(n==0 && sum!=0)
            return false;
        if(n==0 && sum==0)
            return true;
        if(sum==0)
            return true;

        if(dp[sum][n]!=-1)
            return dp[sum][n];
        
     
        if(nums[n-1]<=sum){
     
            bool incl = solve(nums,sum-nums[n-1],n-1);
            bool excl = solve(nums,sum,n-1);
            

            return dp[sum][n] = incl || excl;
        }
        else{
            bool excl = solve(nums,sum,n-1);
            return dp[sum][n] = excl;
        }
    }
    bool canPartition(vector<int>& nums) {
       
        memset(dp,-1,sizeof(dp));
        
        int n = nums.size();
        int sum = 0;
        for(int n:nums)
            sum+=n;
        if(sum%2)
            return false;
        
        return solve(nums,sum/2,n);
    }
};