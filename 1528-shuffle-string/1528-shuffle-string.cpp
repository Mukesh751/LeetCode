class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int,char> p;
        for(int i=0; i<indices.size(); i++)
            p.insert((make_pair(indices[i],s[i])));
        
        
        string ans;
        for(int i=0; i <= 100; i++)
        {
            if(p.count(i))
            ans.push_back(p[i]);
        }
            
        
        return ans;
    }
};