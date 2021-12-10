class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1) return true;
        if(n<=0 || n%4!=0)
            return false;
        
        double x = log2(n)/2;
        if(floor(x)==x)
            return true;
        
        return false;
    }
};