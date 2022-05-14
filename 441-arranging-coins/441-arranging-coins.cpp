class Solution {
public:
    int arrangeCoins(int n) {
        
        long long int k = n;
        k=8*k;
        k++;
        k = sqrt(k);
        double val = k - 1;
        val = val/2;
        int x = val;
        
        return x;
    }
};