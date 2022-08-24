class Solution {
public:
    bool isPowerOfThree(int n) {
        
        if(n==1)
            return true;
        
        if(n<=0 || n%3==1 || n%3==2)
            return false;
        
        return isPowerOfThree(n/3);
    }
};