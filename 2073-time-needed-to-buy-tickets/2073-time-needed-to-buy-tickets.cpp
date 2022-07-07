class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans = 0;
        int temp = tickets[k];
        for(int i = 0; i<=k; i++){
            if(tickets[i]>=temp)
                ans+=temp;
            else
                ans+=tickets[i];
        }
        temp--;
        for(int i = k+1; i<tickets.size(); i++){
            if(tickets[i]>=temp)
                ans+=temp;
            else
                ans+=tickets[i];
        }
        return ans;
    }
};