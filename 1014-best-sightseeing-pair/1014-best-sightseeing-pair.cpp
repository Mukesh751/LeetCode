class Solution {
public:
    vector<int> values;    
    int mx = INT_MIN;
    void solve(int i, int j)
    {
        if(j >= values.size())
        { i++;
          j = i+1;
        }
        if(i >= values.size())
            return;
        
        
        int score = values[i] + values[j] + i - j;
        mx = max(score,mx);
        solve(i,j+1);
        return;
    }
    
    int maxScoreSightseeingPair(vector<int>& values) {
        this->values = values;
        // solve(0,1);
        int n = values[0];
        int j = 0;
        for(int i = 1; i<values.size(); i++)
        {
           int score = n + values[i] + j - i;
           mx = max(score,mx);
           n = max(n,values[i]+i);
        }
        return mx;
    }
};