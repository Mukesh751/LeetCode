class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        map<char,int> m;
        for(int i =0; i<order.size(); i++)
            m[order[i]] = i;
        
    
        for(int i=1; i<words.size(); i++)
        {
            string s = words[i];
            string p = words[i-1];
            
            bool flag = false;
            for(int j=0; j<min(s.size(),p.size()); j++)
            {   
                if(m[s[j]] > m[p[j]])
                {
                    flag = true;
                    break;
                }
                if( m[s[j]] < m[p[j]] )
                    return false;
            }   
            
            if(p.size()>s.size() && flag == false)
                return false;
        }
        return true;
    }
};