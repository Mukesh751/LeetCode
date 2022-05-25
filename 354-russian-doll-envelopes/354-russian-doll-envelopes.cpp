class Solution {
public:
int maxEnvelopes(vector<vector<int>>& envelopes) {
    int n=envelopes.size();
   
    vector<int>dp;
 
    sort(envelopes.begin(), envelopes.end(), [](vector<int>& a, vector<int>& b) 
             -> bool {return a[0] == b[0] ? b[1] < a[1] : a[0] < b[0];});
    for(int i=0;i<n;++i)
    { 
       int it =lower_bound(dp.begin(),dp.end(),envelopes[i][1])-dp.begin();
           if(it>=dp.size())
           {
               dp.push_back(envelopes[i][1]);
           }
        else
        {
            dp[it]=envelopes[i][1];
        }
    }
    return dp.size();
}
};