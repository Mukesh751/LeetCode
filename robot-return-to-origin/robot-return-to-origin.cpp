class Solution {
public:
    bool judgeCircle(string moves) {
        
        int a=0,b=0,c=0,d=0;
        for(int i=0; i<moves.size(); i++)
        {
              if(moves[i]=='L')
                  a++;
              else  if(moves[i]=='R')
                  b++;
            else  if(moves[i]=='U')
                   c++;
            else
                   d++;
        }
        
        if(a==b && c==d)
            return true;
        else
            return false;
    }
};