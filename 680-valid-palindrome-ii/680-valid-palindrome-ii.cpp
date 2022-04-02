class Solution {
public:
    bool check(string s)
    {
        for(int i=0; i<s.size()/2; i++)
        if(s[i]!=s[s.size()-1-i])
            return false;
        
            return true;
    }
    
    bool validPalindrome(string s) {
        if(check(s))
            return true;
        
        for(int i=0; i<=s.size()/2; i++)
        {
            string temp=s;
            if(s[i]!=s[s.size()-1-i])
            {
                temp.erase(temp.begin()+i);
                s.erase(s.begin()+s.size()-1-i);
                if(check(temp)==true || check(s)==true)
                    return true;
                else
                    return false;
            }
        }
        
      return false;
    }
};