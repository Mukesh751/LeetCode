class Solution {
public:
    static bool comp(pair<int,int> a, pair<int,int> b){
        return a.second<b.second;
    }
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        
        unordered_map<int,int> mp;
        for(auto x: arr)
            mp[x]++;
        
        vector<pair<int,int>> v;
        for(auto x: mp)
            v.push_back(x);
        
        sort(v.rbegin(),v.rend(),comp);
        
        // for(auto x: v)
        //     cout<<x.first<<" "<<x.second<<endl;
        
        int s = 0;
        int count = 0;
        
        for(auto x: v){
            count++;
            s+=x.second;
            if(s>=n/2)
                break;
        }
        return count;
    }
};