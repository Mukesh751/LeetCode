class Solution {
public:
   
    int numSplits(string s) {
    
        map<char,int>l,r;
        int n=0;
        for(int i=0;i<s.size();i++)
        {
            r[s[i]]++;
        }
        
        for(int i=0;i<s.size();i++)
        {
            l[s[i]]++;
            r[s[i]]--;
            if(l[s[i]]==0)
                l.erase(s[i]);
            if(r[s[i]]==0)
                r.erase(s[i]);
            if(l.size()==r.size())
                n++;
        }
        return n;
    }
};