class Solution {
public:
    int characterReplacement(string s, int k) {
         int i=0,j=0,ans=INT_MIN,n=s.size(),len=0;
        vector<int>cnt(26,0);
        while(i<n && j<n){
            cnt[s[i]-'A']++;
            len=i-j+1;
            if(len-*max_element(begin(cnt),end(cnt))<=k){  
                i++;
            }
            else {
                cnt[s[j]-'A']--;  
                j++;
                i++;
            }
            ans=max(ans,i-j);
        }
        return ans;
    }
};