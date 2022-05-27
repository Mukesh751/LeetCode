class Solution {
public:
    bool isSubsequence(string s, string t) {
       for(char c : t)
       {
           if(s[0] == c)
           
               s.erase(s.begin()+0);
           
       }
        if(s.size()>0)
            return false;
        
        return true;
    }
};