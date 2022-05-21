class Solution {
public:
    bool isPowerOfTwo(long long int n) {
        
         if(n==1)
            return true;
        
        if(n<=0 || n%2!=0 )
            return false;
        
       double x = log2(n);
        
        if(floor(x) == x)
            return true;
        
        // for(long long int i=1; i<=n; i=i*2)
        //     if(i==n)
        //         return true;
        
       
       //return isPowerOfTwo(n/2);
        return false;
        
       
    }
};