class Solution {
public:
    char v[1005][5000];
    bool check = true;
    void fillcol(string s, int rows, int col, int j)
    {
        for(int i=0; i<rows ; i++)
        {
            if(j==s.size())
            {
                check = false;
                break;
            }
            v[i][col]=s[j];
            j++;
        }
        if(check == true)
            filldiag(s,rows,col,j);
    }
      void filldiag(string s, int rows, int col, int j)
    {
        for(int i=rows-2; i>0 ; i--)
        {
            if(j==s.size())
            {
                check = false;
                break;
            }
            col++;
            v[i][col]=s[j];
            j++;
        }
          col++;
        if(check == true)
            fillcol(s,rows,col,j);
    }
    string convert(string s, int numRows) {
        
        if(numRows==1)
            return s;
        
        int n = s.size();
        for(int i=0; i<numRows+1; i++)
            for(int j=0; j<4000; j++)
                v[i][j]='$';
        
        fillcol(s,numRows,0,0);
        string str;
        
        for(int i=0; i<numRows+1; i++)
           for(int j=0; j<4000; j++)
              if(v[i][j]!='$')  
               str.push_back(v[i][j]);
        
       //  char ch;
       // for(int i=0; i<str.size(); i++)
       // {
       //     if(str[i]>='a' && str[i]<='z')
       //         continue;
       //    else if(str[i]>='A' && str[i]<='Z')
       //         continue;
       //     else if(str[i]==',' || str[i]=='.')
       //         continue;
       //     else
       //         ch=str[i];
       // }
//         string ans="";
//         for(int i=0; i<str.size(); i++)
//             if(str[i]!=ch)
//                 ans.push_back(str[i]);
        
        return str;
    }
};