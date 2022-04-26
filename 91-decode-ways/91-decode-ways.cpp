class Solution {
public:
    set<string> set;
    
     map<string,int> dp;
    
    int numDecodings(string s) {
         set.insert("00");
         set.insert("01");
         set.insert("02");
         set.insert("03");
         set.insert("04");
         set.insert("05");
         set.insert("06");
         set.insert("07");
         set.insert("08");
         set.insert("09");
        
        if(s[0]=='0')
            return 0; 
        
        if(s.size()==1)
            return 1;
        
       // memset(dp,-1,sizeof(dp));
        
       return recurse(s,0);
    }
    int recurse(string s, int i)
    {
        if(s.size()==0)
        {
            
            return 1;
        } 
        int ans=0;
        
        if(s[i]=='0')
            return 0;
        
        string k = s+'$'+to_string(i);
        
        if(dp.find(k) != dp.end())
            return dp[k];
        
        if(s[i+1]!='0')
        { 
            string temp = s;
            temp.erase(temp.begin()+i);
            int t = recurse(temp,i);
            ans+=t;
        }
        if(s.size()>1)
        {
            if(stoi(s.substr(i,i+2))>=1 && stoi(s.substr(i,i+2))<=26)
           {
            s.erase(s.begin()+i, s.begin()+i+2);
           int t = recurse(s,i);
                ans+=t;
           }
        }
        return dp[k]=ans;
    }
};