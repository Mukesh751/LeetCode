class Solution {
public:
    set<string> word;
    string s;
    vector<string> ans;
    int mx = INT_MIN;
    void solve (int i, string p){
        
        if(i>=s.size())
        {
            ans.push_back(p);
            return;
        }
        
        for(int k = 1; k+i<=s.size(); k++){
            if(word.find(s.substr(i,k)) != word.end()){
                cout<<s.substr(i,k)<<endl;
                string temp = p;
                temp+= s.substr(i,k) + " ";
                solve(i+k,temp);
            }
        }
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
       
        for(string x : wordDict){
            word.insert(x);
        }
        
        this->s = s;
        solve(0,"");
        
        for(auto &x : ans)
            x.pop_back();
        return ans;
    }
};