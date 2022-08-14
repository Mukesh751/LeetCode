class Solution {
public:
    bool isp(string s){
        string t = s;
        reverse(s.begin(),s.end());
        return t == s;
    }
    int longestPalindrome(vector<string>& words) {
        map<string,int> m;
        int ans = 0;
        
        for(auto x : words)
            m[x]++;
        
        int count = 0;
        int p = 0;
        for(auto x : m){
            if(m[x.first] == 0)
                continue;
            string s = x.first;
            string t = s;
            reverse(s.begin(),s.end());
            if(m.find(s) != m.end() && m[s]>0){
                if(isp(s)){
                    int x = m[s]/2;
                    int y = m[s]%2;
                    p = max(p,y*2);
                    count+=x*4;
                }
                else{
                    int x = min(m[s],m[t]);
                    count+=x*4;
                    m[s]-=x;
                    m[t]-=x;
                }
            }
        }
        return count + p;
    }
};