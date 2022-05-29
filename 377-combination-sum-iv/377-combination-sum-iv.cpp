class Solution {
public:
int combinationSum4(vector<int>& nums, int target) {

    vector<int> dp(target+1,-1);
       
    return solve(nums,target,0,dp);
    
}

int solve(vector<int>& nums,int target,int sum,vector<int>& dp){
         
   if(sum==target){
      dp[sum]=1;return 1;
   }
    
   if(sum>target){
      return 0;
   }
    
   if(dp[sum]!=-1){
       return dp[sum];
   }        
       
   int res = 0;
   for(int i=0;i<nums.size();i++){
  
       res+=solve(nums,target,sum+nums[i],dp);
                         
   }  
              
    return dp[sum] = res;
}
};
