class Solution {
public:
    bool isPowerOfTwo(long long int n) {
        
        if(n<0 || n%2!=0 && n!=1)
            return false;
        
//         float x = log(n)/log(2);
        
//         int y = (int) x;
//         if(x==y)
//             return true;
        
        for(long long int i=1; i<=n; i=i*2)
            if(i==n)
                return true;
        
        return false;
        
        
    }
};