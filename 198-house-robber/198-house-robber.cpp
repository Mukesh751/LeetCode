class Solution {
public:
map<int,int> dp;
    int ans = 0;
    int solve(int n,vector<int> &nums ){

    if(n==0)
    return nums[n];
   
    if(n<0)
    return 0;

    if(dp.find(n)!=dp.end())
    return dp[n];

     int pick =nums[n]+solve(n-2,nums);
     int notpick=0+solve(n-1,nums);

    return dp[n]=max(pick,notpick);  
}
    int rob(vector<int>& nums) {
       // memset(dp,-1,sizeof(dp));
        return solve(nums.size()-1,nums);
    }
};