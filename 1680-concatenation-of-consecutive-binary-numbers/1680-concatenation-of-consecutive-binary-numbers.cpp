class Solution {
public:
    int concatenatedBinary(int n) {
         int mod = 1e9 + 7;
        long long ans = 0;
        for (int i = 1; i <= n; ++ i) {
            int len = 32 - __builtin_clz(i);
            ans = (ans << len | i) % mod;
        }
        return ans;
    }
};