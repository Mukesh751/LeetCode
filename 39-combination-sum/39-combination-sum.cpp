class Solution {
public:
    vector<vector<int>> ans;
    vector<int> candidates;
    void solve(int target,vector<int> v,int k)
    {
        if(target<0)
            return;
        if(target == 0)
        {
            ans.push_back(v);
            return;
        }
        for(int i = k; i<candidates.size(); i++)
        {
            v.push_back(candidates[i]);
            solve(target-candidates[i],v,i);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        this->candidates = candidates;
        vector<int> v;
        solve(target,v,0);
        return ans;
    }
};