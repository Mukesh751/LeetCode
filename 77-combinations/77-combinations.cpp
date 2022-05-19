class Solution {
public:
    vector<vector<int>> ans;
    int n,k;
    void solve (vector<int> temp, int i)
    {
        if(temp.size()==k)
        {
            ans.push_back(temp);
            return;
        }
        if(i>n)
            return;
        
        for(;i<=n; i++)
        {
            temp.push_back(i);
            solve(temp,i+1);
            temp.erase(temp.end()-1);
        }
        return;
    }
    vector<vector<int>> combine(int n, int k) {
        this->n = n;
        this->k = k;
        solve({},1);
        return ans;
    }
};