class Solution {
public:
   int dp[105];
    int ans = 0;
    int solve(int i,int n,vector<int> &nums ){

    if(n==i)
    {
        return nums[i];
    }
    if(n<i)
    return 0;

    if(dp[n]!=-1)
    return dp[n];

     int pick =nums[n]+solve(i,n-2,nums);
     int notpick=0+solve(i,n-1,nums);

    
    return dp[n]=max(pick,notpick);  
}
   
     
    
    
    int rob(vector<int>& nums) {
       
        if(nums.size()==1)
            return nums[0];
        
        memset(dp,-1,sizeof(dp));
      // if(nums.size()%2==1)
      //   return solveodd(nums.size()-1,nums);
        
        int l = solve(0,nums.size()-2,nums);
        memset(dp,-1,sizeof(dp));
        
        int r = solve(1,nums.size()-1,nums);
        
        return max(l,r);
        //return r;
    }
};