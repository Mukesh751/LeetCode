class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<vector<vector<int>>> dp(prices.size(),vector<vector<int>>(2,vector<int>(2,-1)));
        return fun(dp,prices,0,0,2);
    }
    int fun(vector<vector<vector<int>>>& dp,vector<int>& v,int ind,int flag,int count)
    {
        if(count==0 || ind==v.size())
            return 0;
        
        if(dp[ind][flag][count-1] !=-1)
            return dp[ind][flag][count-1];
        int t;
        if(flag==0)
            t=max(fun(dp,v,ind+1,flag,count),-1*v[ind]+fun(dp,v,ind+1,1,count));
        else
            t=max(fun(dp,v,ind+1,flag,count),v[ind]+fun(dp,v,ind+1,0,count-1));
        
        return dp[ind][flag][count-1]=t;
    }
};