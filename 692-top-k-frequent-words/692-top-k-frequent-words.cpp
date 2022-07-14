class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> m;
        for(auto x : words)
            m[x]++;
        vector<pair<string,int>> v;
        vector<string> ans;
        for(auto x : m)
            v.push_back(x);
        
        sort(v.rbegin(),v.rend(),[](auto& l,auto& r){
           return (l.second == r.second) ? l.first>r.first : l.second < r.second ;
        });
        
        for(auto x : v)
            cout<<x.first<<" "<<x.second<<endl;
        
        int i = 0;
        while(k--)
            ans.push_back(v[i++].first);
        
        //sort(ans.begin(),ans.end());
        return ans;
    }
};