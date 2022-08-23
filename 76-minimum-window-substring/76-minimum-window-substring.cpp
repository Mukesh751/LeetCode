class Solution {
public:
    string minWindow(string s, string t) {
        int i=0, j= 0;
        unordered_map<char,int> m;
        if(t.size()>s.size())
            return "";
        
        for(auto x : t)
            m[x]++;
        
        int count = m.size();
        string ans="";
        pair<int,int> temp;
        int ws = INT_MAX;
        while(j<s.size()){
            if(m.find(s[j]) != m.end())
            {     m[s[j]]--;
            if(m[s[j]] == 0)
                count--;
            }
            if(count>0)
                j++;
            
            else if(count == 0){
                 if(j-i+1<=ws){
                           ws = j-i;
                           temp = {i,j};
                       }
                while(count == 0){
                   if(m.find(s[i]) == m.end()){
                       i++;
                       if(j-i+1<=ws){
                           ws = j-i;
                           temp = {i,j};
                       }
                   }else{
                    m[s[i]]++;
                        if(m[s[i]]>0){
                        count++;
                            i++;
                        }else{
                            i++;
                            if(j-i+1<=ws){
                           ws = j-i;
                           temp = {i,j};
                       }
                        }
                   }
                }
                j++;
            }
            
        }
        if(ws == INT_MAX)
            return "";
         ans = "";
        for(int k = temp.first; k<=temp.second; k++)
            ans+=s[k];
        return ans;
    }
};