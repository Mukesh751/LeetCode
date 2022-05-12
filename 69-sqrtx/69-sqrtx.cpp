class Solution {
public:
    long long int mySqrt(long long int x) {
        if(x==0) return 0;
        if(x==1 || x==2 || x==3) return 1;
        long long int n;
        for(long long int i=2; i<=x/2; i++)
        {  if(i*i==x)
             {n=i; break;}
            if(i*i>x)
            { n=i-1; break;}
        }return n;
        
    }
};