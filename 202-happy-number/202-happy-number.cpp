class Solution {
public:
    bool isHappy(int n) {
       set<int> s;
        while(true)
       {
           s.insert(n);
            int num = 0;
            while(n>0)
            {
                int r = n%10;
                num += r*r;
                n = n/10;
            }
            n = num;
            if(n==1)
                return true;
            if(s.find(n)!=s.end())
                return false;
         
       }
        return false;
    }
};