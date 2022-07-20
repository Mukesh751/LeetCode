class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> m;
        for(auto x : s)
            m[x]++;
        
        vector<pair<int,char>> v;
        for(auto x : m)
            v.push_back({x.second,x.first});
        
        sort(v.rbegin(),v.rend());
        
        string ans = "";
        for(auto x : v)
        {
            int k = x.first;
            while(k--)
                ans.push_back(x.second);
        }
        
        return ans;
    }
};