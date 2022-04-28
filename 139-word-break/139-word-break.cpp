class Solution {
public:
    
    map<string,bool> m;
    
    bool ans = false;
    void solve(string s, vector<string>& word )
    {
        if(s.size()==0)
        {
            ans = true;
            return;
        }
        
        if(m.find(s)!=m.end())
        {
            ans = ans || m[s];
            return;
        }
        
        for(int i=0; i<word.size(); i++)
        {
            int k = word[i].size();
            
             if(s.substr(0,k) == word[i])
            {
                
                string temp = s;
                temp.erase(temp.begin(), temp.begin()+k);
                solve(temp,word);
                
            }
            
        }
        
        ans = ans || false;
        m[s] = ans;
        return;
        
    }
    
    bool wordBreak(string s, vector<string>& wordDict) {
        solve(s,wordDict);
        return ans;
    }
};