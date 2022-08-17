class Solution {
public:
    bool check(vector<int> a, vector<int> b){
        for(int i = 0; i<a.size(); i++)
            if(a[i] != b[i])
                return false;
        
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int> mp1(26,0),mp2(26,0);
        int m=s.size(),n=p.size();
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            mp2[p[i]-'a']++;
        }
        int i=0,j=0;
        while(j<m)
        {
            while(j<m&&j-i<n)
            {
                mp1[s[j]-'a']++;
                j++;
            }
            if(mp1==mp2)
            {
                ans.push_back(i);
            }
            mp1[s[i]-'a']--;
            i++;
        }
        return ans;

    }
};