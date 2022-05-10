class Solution {
public:
    vector<int> dp,cost;
    int solve(int n)
    {
        if(n<2) 
            return cost[n];
        if(dp[n]!=-1) 
            return dp[n];
        return dp[n]=cost[n]+min(solve(n-1),solve(n-2));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        this->cost = cost;
        int n=cost.size();
        dp.resize(n,-1);
        return min(solve(n-1),solve(n-2));
    }
};