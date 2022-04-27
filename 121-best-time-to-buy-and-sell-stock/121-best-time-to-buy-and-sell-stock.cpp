class Solution {
public:
    int profit=0;
    int dp[100005];
    
    int solve(vector<int>& prices, int k)
    {
        if(k==prices.size())
            return 0;
        
        if(dp[k]!=-1)
            return dp[k];
        
        int temp = prices[k];
        int temp_profit = 0;
        for(int i=k+1; i<prices.size(); i++)
            if(prices[i]>temp)
                temp_profit = max(temp_profit, prices[i] - temp);
                
        profit = max(profit,temp_profit);
        
        int z;
        
        if(dp[k+1]!=-1)
          z = dp[k+1];
        else
        {
            z = solve(prices,k+1);
            dp[k+1] = z;
        }
        dp[k] =max(profit,z);
        return dp[k];
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int left[n],right[n];
        left[0] = prices[0];
        right[n-1] = prices[n-1];
        for(int i=1 ; i<n; i++)
        {
           left[i] = min(prices[i],left[i-1]);
            
            right[n-i-1] = max(prices[n-1-i],right[n-i]);    
        }
        int m = 0;
        for(int i=0; i<n; i++)
            m = max(m,right[i]-left[i]);
        
        return m;
    }
};