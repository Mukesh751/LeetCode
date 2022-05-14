class Solution {
public:
    bool isAnagram(string s, string t) {
          map<char,int> m;
        if(s.size()!=t.size())
            return false;
        for(char c : s)
            m[c]++;
        for(char c : t)
        {    
            if(m.find(c)!=m.end() && m[c]>0)
                m[c]--;
            else
                return false;
        }
        return true;
    }
};