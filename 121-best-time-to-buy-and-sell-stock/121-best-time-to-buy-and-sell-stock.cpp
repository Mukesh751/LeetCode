class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int max_profit = 0, min_price = INT_MAX;
        
        for (int curr_price : prices) {
            int curr_profit = curr_price - min_price;
            max_profit = max(max_profit, curr_profit);
            min_price = min(min_price, curr_price);
        }
        
        return max_profit;
    }
};