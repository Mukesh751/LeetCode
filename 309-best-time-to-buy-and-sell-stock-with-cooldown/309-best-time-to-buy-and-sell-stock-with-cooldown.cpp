class Solution {
public:
    vector<int> prices;
    int mx = INT_MIN;
    map<pair<int,int>,int> m;
    int solve (int i, int take)
    {
        if(i>=prices.size())
            return 0;
        
        pair<int,int> s = make_pair(i,take);
        if(m.find(s)!=m.end())
            return m[s];
        
        int ans = INT_MIN;
        
        if(take == -1)
        {
           int temp = max(solve(i+1,prices[i]),solve(i+1,take));
           ans = max(ans,temp);
        }
        if(prices[i]>take && take>=0)
        {
            int profit = prices[i] - take;
            int temp = max(profit + solve(i+2,-1), solve(i+1,take));
            ans = max(ans,temp);
        }
        
        m[s] = ans;
      return ans;
    }
    
    int maxProfit(vector<int>& prices) {
        this->prices = prices;
        return solve(0,-1);
    }
};