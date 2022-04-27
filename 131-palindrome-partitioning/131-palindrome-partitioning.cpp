class Solution {
public:
     vector<vector<string>> ans;
    
    bool isp(string s)
    {
        for(int i=0; i<(s.size())/2; i++)
            if(s[s.size()-1-i]!=s[i])
                return false;
        
        return true;
    }
    
    void solve(string s, int i, vector<string> v)
    {
        if(i==s.size())
        {
            ans.push_back(v);
            return;
        }
        
        for(int k=i; k<s.size(); k++)
        {
            string p = s.substr(i,k+1-i);
            if(isp(p))
            {
                v.push_back(p);
                solve(s,k+1,v);
                 v.pop_back();    
             }
        }
        
    }
    
    vector<vector<string>> partition(string s) {
        vector<string> v;
        solve(s,0,v);
        return ans;
    }
};