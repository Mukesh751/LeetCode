class Solution {
public:
    vector<int> coins;
     int ans ;
    vector<vector<int>> dp;
    
     int solve(int amount, int i)
    {
        if(amount == 0 )
            return 0;
        
        if(i<0 ||amount<0)
            return 1e6; 
        
        
        if(dp[amount][i]!=-1)
            return dp[amount][i];
        
         int a ,b ;
       
        a = solve(amount-coins[i],i);
    
         b = solve(amount,i-1);
          
        
        a++;
        
        ans = min(a,b);
        return dp[amount][i] = ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        
        this->coins = coins;
        vector<vector<int>>h(amount+1,vector<int>(coins.size()+1,-1));
        dp = h;
        int k = solve(amount,coins.size()-1);
        
        if(k==1e6)
            return -1;
       
        return k;
    }
};