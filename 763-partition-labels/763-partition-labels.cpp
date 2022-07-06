class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char,int> map;
        vector<int> ans;
        for(int i=s.length()-1; i>=0; i--)
        {
            if(map.find(s[i])==map.end())
                map[s[i]]=i;
        }
        
        int size=0 , end=0;
         
        for(int i=0; i<s.length(); i++)
        {
             size++;
            end = max(end,map[s[i]]);
            if(i==end)
            {
                ans.push_back(size);
                size=0;
            }
        }
        return ans;
    }
};