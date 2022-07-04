class Solution {
public:
    int longestPalindrome(string s) {
       map<char,int> m;
        for(int i = 0; i<26; i++)
           m['a' + i] = 0;
        for(int i = 0; i<26; i++)
           m['A' + i] = 0;
        
        for(char c : s)
             m[c]++;
        
        bool odd = false;
        int ans = 0;
        for(char c : s)
        {
            if(m[c]%2 == 1)
                odd = true;
            
            if(m[c] != 0)
            {
                if(m[c]%2 == 0)
                ans += m[c];
                else
                    ans+= m[c]-1;
                
                m[c] = 0;
            }
            
        }
        if(odd)
            ans++;
        return ans;
    }
};