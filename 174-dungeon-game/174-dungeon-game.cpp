class Solution {
public:
    vector<vector<int>> nums;
    
    int dp [205][205];
    
    int solve(int i, int j){
        
        if(i>=nums.size() || j>=nums[0].size())
            return INT_MAX;
       
        if(dp[i][j] != -1)
            return dp[i][j];
        
        int down = solve(i+1,j);
        int right = solve(i,j+1);
        
        int hp = min(right,down);
        
        if(hp == INT_MAX)
            hp = 1;
        
        int ans = 0;
        
        if(hp - nums[i][j]>0)
            ans = hp - nums[i][j];
        else
            ans = 1;
        
        return dp[i][j] = ans;
    }
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
    nums = dungeon; 
    memset(dp,-1,sizeof(dp));
    return solve(0,0);
    }
};