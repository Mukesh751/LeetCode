class Solution {
public:
  vector<vector<int>> cost;
    int m,n,target;
    vector<int> houses;
    const int inf = 1e9;

    int dp[101][21][101];
    
    
    int rec(int level,int prev,int stage){
    
        if(level == m){
            
            if(stage == target) return 0;
            return inf;
        }
        
        if(dp[level][prev][stage] != -1) return dp[level][prev][stage];
        
        int ans = inf;
        
        
        if(houses[level] == 0){
        for(int choice=1;choice<=n;choice++){
    
            if(choice == prev){
                ans = min(ans,cost[level][choice-1]+rec(level+1,choice,stage));
            }
            
            else{
                ans = min(ans,cost[level][choice-1]+rec(level+1,choice,stage+1));
            }
        }
        }
        
        else{
            if(prev == houses[level]) ans = min(ans,rec(level+1,prev,stage));
            else ans = min(ans,rec(level+1,houses[level],stage+1));
        }
        return dp[level][prev][stage] = ans;
    }
    
    int minCost(vector<int>& _houses, vector<vector<int>>& _cost, int _m, int _n, int _target) {
        cost = _cost;
        m = _m;
        n = _n;
        houses = _houses;
        target = _target;
        memset(dp,-1,sizeof(dp));
        
        if(rec(0,0,0) == inf) return -1;
        return rec(0,0,0);
    }
};