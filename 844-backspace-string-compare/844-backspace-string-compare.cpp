class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int size = s.size();
        int i = 0;
        size*=2;
        while(size--)
        {   
             while(s[0]=='#')
             s.erase(s.begin(),s.begin()+1);
            if(s[i]>='a' && s[i]<='z')
            {
                i++;
                continue;
            }
           if(s[i]=='#')
           {s.erase(s.begin()+i-1,s.begin()+i+1);
            i--;}
        }
        
         size = t.size();
         i = 0;
        size*=2;
        while(size--)
        {
                  
         while(t[0]=='#')
             t.erase(t.begin(),t.begin()+1);  
            
            if(t[i]>='a' && t[i]<='z')
            {
                i++;
                continue;
            }
            if(t[i]=='#')
            {t.erase(t.begin()+i-1,t.begin()+i+1);
            i--;}
        }
        
        cout<<s<<" "<<t;
        

        
        if(s.size()==0 && t.size()==0)
            return true;
        if(s.size()==0 || t.size()==0)
            return false;
        
        
        if(s==t)
        return true;
        
        return false;
    }
};