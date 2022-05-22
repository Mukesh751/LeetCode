class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
      string s = "";
        while(n>0)
        {
            int k = n%2;
            s.push_back(k+'0');
            n = n/2;
        }
        while(s.size()<32)
            s.push_back('0');
        
        uint32_t ans = 0;
        for(int i = 0; i<s.size(); i++)
            ans+=pow(2,31-i)*(s[i]-'0');
        
        return ans;
    }
};