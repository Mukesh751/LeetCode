class Solution {
public:
    bool isPowerOfTwo(long long int n) {
        
       return n > 0 && not (n & n - 1);
        
       
    }
};