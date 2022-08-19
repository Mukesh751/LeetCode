class Solution {
public:
    char slowestKey(vector<int>& v, string s) {
        char ans = s[0];
        int k = v[0];
        for(int i = 1; i<s.size(); i++){
            cout<<s[i]<<" "<<v[i]-v[i-1]<<endl;
            if(k<v[i]-v[i-1]){
                ans = s[i];
                k = v[i] - v[i-1];
            }
            else if(k == v[i] - v[i-1])
                   if(s[i]>ans)
                     ans = s[i];
        }
        return ans;
    }
};