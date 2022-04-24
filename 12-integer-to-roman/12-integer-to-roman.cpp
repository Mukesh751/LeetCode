class Solution {
public:
    string intToRoman(int num) {
        string ans;
        int x =num%10;
        num = num/10;
        if(1<=x && x<=3)
        { for(int i=0; i<x; i++)
                ans.push_back('I');
        }
        else if(x==4)
        {
             ans.push_back('V');
            ans.push_back('I');
        }
        else if(5<=x && x<=8)
        {
            x%=5;
           for(int i=0; i<x; i++)
                ans.push_back('I');
           ans.push_back('V');
        }
        else if(x==9)
           {
             ans.push_back('X');
            ans.push_back('I');
        }
        
         x =num%10;
        num = num/10;
        if(1<=x && x<=3)
        { for(int i=0; i<x; i++)
                ans.push_back('X');
        }
        else if(x==4)
           {
             ans.push_back('L');
            ans.push_back('X');
        }
        else if(5<=x && x<=8)
        {
            x%=5;
           for(int i=0; i<x; i++)
                ans.push_back('X');
           ans.push_back('L');
        }
        else if(x==9)
          {
             ans.push_back('C');
            ans.push_back('X');
        }
        
         x =num%10;
        num = num/10;
        if(1<=x && x<=3)
        { for(int i=0; i<x; i++)
                ans.push_back('C');
        }
        else if(x==4)
           {
             ans.push_back('D');
            ans.push_back('C');
        }
        else if(5<=x && x<=8)
        {
            x%=5;
           for(int i=0; i<x; i++)
                ans.push_back('C');
           ans.push_back('D');
        }
        else if(x==9)
          {
             ans.push_back('M');
            ans.push_back('C');
        }
        
         x =num%10;
        num = num/10;
        if(1<=x && x<=3)
        { for(int i=0; i<x; i++)
                ans.push_back('M');
        }
       
        reverse(ans.begin(),ans.end());
        return ans;
    }
};