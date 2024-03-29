class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
    unordered_set<char> cset;
    int i = 0;
    int j = 0;
    int ct = 0;
    int result = 0;
    
    while(j<n)
    {
        if(cset.count(s[j])==0)
        {
            cset.insert(s[j]);
            ct = cset.size();
            result = max(result , ct);
            j++;
        }
        else 
        {
            cset.erase(s[i]);
            i++;
        }
    }
    return result;
    }
};