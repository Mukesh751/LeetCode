class Solution {
public:
    string replace(string word){
        map<char,char> m;
        string s = "";
        char ch = 'a';
        for(auto x : word){
            if(m.find(x) != m.end())
                s.push_back(m[x]);
            else
            {
                m[x] = ch;
                ch++;
                s.push_back(m[x]);
            }
        }
        return s;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> w = words;
        for(auto &x : w){
            x = replace(x);
        }
        pattern = replace(pattern);
        
        vector<string> ans;
        
        for(int i = 0; i<w.size(); i++){
            if(w[i] == pattern)
                ans.push_back(words[i]);
        }
        return ans;
    }
};