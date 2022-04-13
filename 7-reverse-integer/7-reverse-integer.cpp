class Solution {
public:
    int reverse(int x) {
        int f = 0;
        long long int n = x;
        if(x<0)
        {
            f=1;
            n*=(-1);
        }
        long long int y = 0;
        while(n>0)
        {
            y = y*10 + n%10;
            n/=10;
        }
        
        if(f==1)
            y*=(-1);
        
        int z = y;
        if(z==y)
            return z;
        
        return 0;
    }
};