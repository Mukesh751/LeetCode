class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1 == s2)
            return true;
        
        int diff = 0;
        int pos = 0;
        for(int i=0; i<s1.size(); i++)
        {
            if(s1[i]!=s2[i])
            {
                if(diff == 0)
                {
                    diff++;
                    pos = i;
                }
                else
                {
                    diff++;
                    if(s1[i] != s2[pos] || s2[i] != s1[pos])
                        return false;
                }
            }
        }
        if(diff==2)
            return true;
        return false;
    }
};