class Solution {
public:
   
    int dp[2501][2501];
	
    int solve(vector<int>& v,int ind,int prev){
        int n=v.size();
        if(ind==n) return 0;
        
        if(prev>-1 and dp[ind][prev]!=-1) return dp[ind][prev];
        int res=0;
		
		
        res = solve(v,ind+1,prev);
		
		
        if(prev==-1 or v[ind]>v[prev])
        res = max(res,1+solve(v,ind+1,ind));
		
		
        if(prev>-1) 
            dp[ind][prev]=res;
        
        return res;
        
    }
    
    int lengthOfLIS(vector<int>& v) {
        memset(dp,-1,sizeof(dp));
        return solve(v,0,-1);
    }
    
};