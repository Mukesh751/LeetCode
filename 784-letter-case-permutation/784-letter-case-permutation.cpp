class Solution {
public:
    set<string> myset;
    string s;
    void solve (int i, string op)
    {
        if(i == s.size())
        {
            myset.insert(op);
            return;
        }
        if(s[i]-'0'>=0 && s[i]-'0'<=9)
        {
            op.push_back(s[i]);
            solve(i+1,op);
            return;
         }
      
            string temp = op;
            op.push_back(tolower(s[i]));
            solve(i+1,op);
            temp.push_back(toupper(s[i]));
            solve(i+1,temp);
            return;
      
    }
    vector<string> letterCasePermutation(string s) {
        this->s = s;
        solve(0,"");
        vector<string> ans;
        for(string x : myset)
            ans.push_back(x);
        
        return ans;
    }
};