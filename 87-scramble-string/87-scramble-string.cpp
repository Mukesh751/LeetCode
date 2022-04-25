class Solution {
public:
    
    map<string,bool> m;
    
    bool solve(string a, string b)
    {
        if(a.compare(b) == 0)
            return true;
        
        if(a.length()<=1)
            return false;
        
        string s=a+" "+b;
        
        if(m.find(s)!=m.end())
            return m[s];
        
        int n = a.size();
        
        for(int i=1; i<n; i++)
        {
            bool c1,c2;
         
           c1 = (solve(a.substr(0,i) , b.substr(n-i)) == true) && 
             (solve(a.substr(i) , b.substr(0,n-i)) == true) ;
            
             c2 = (solve(a.substr(0,i) , b.substr(0,i)) == true) && 
             (solve(a.substr(i) , b.substr(i)) == true) ;
                
          if(c1 || c2)
          {
              return m[s] = true;
          }
        }
        return m[s] = false;
    }
    
    bool isScramble(string s1, string s2) {
       
        return solve(s1,s2);
    }
};