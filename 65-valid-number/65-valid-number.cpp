class Solution {
public:
    bool isint(char c)
    {
        if(c-'0'>=0 && c-'0'<=9)
            return true;
        return false;
    }
    bool isNumber(string s) {
        int point = 0;
        int count = 0;
        int ecount = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(isint(s[i]))
                count++;
        }
        if(count==0)
        {
            cout<<"no integer";
            return false;
        }
        for(int i=0; i<s.size(); i++)
        {
            if(isint(s[i]))
                continue;
            else if(s[i]=='+'|| s[i]=='-')
            {
                if(s.size()==1)
                    return false;
                
                if(i == s.size()-1 )
               {
                cout<<"false 1"<<" ";
                return false;
               }
                if(i==0)
                {
                    if(isint(s[i+1])==false)
                        if(s[i+1]!='.')
                            return false;
                }
                if(i>0)
                {    if(s[i-1]=='e' || s[i-1]=='E')
                         continue;
                    else
                    {   cout<<"false 1 extended";
                        return false;
                    }
                 }
             else
                 continue;
            }
            else if( s[i]=='e' || s[i]=='E')
            {
                if(ecount!=0)
                    return false;
                
                ecount++;
                
                if(s.size()==1)
                    return false;
                
                if(i==0 || i==s.size()-1)
                  return false;
                
            if( isint(s[i+1]) == false || isint(s[i-1])==false)
            { if(s[i-1]!='.' && isint(s[i-1])==false)
               {
                cout<<"false 2"<<" ";
                   return false;
               }
            }
             else
                 continue;
            }
            else if(s[i]=='.')
            {
                if(point!=0 || ecount!=0)
                    return false;
                
                point++;
                if(s.size()==1)
                {
                    cout<<"false 3"<<" ";
                    return false;
                }
                if(i==0 && s[i+1]=='e')
                    return false;
                if(i>0 && isint(s[i-1])==false)    
                {
                     
                    if(s[i-1] == '+' || s[i-1]=='-')
                    {
                        continue;
                    }
                    else
                    {
                        cout<<"false 4"<<" ";
                        return false;
                    }
                }
                if(i<s.size()-1 && isint(s[i+1])==false)
                { 
                  
                    if(s[i+1] == 'e' || s[i+1] =='E')
                    {
                        continue;
                    }
                    else
                    {
                        cout<<"false 5"<<" ";
                        return false;
                    }
                }
            }
            else
            {
                cout<<"false 6"<<" ";
                return false;
            }
        }
        return true;
    }
};