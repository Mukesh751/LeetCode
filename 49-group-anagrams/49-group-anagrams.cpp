class Solution {
public:
    bool sortbysec( pair<int,string> &a,
                pair<int,string> &b)
{
    return (a.second < b.second);
}
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // vector<vector<string>> temp;
        // if(strs.size() <2)
        // { temp.push_back(strs);
        //   return temp;}
        vector<pair<int,string>> vp;
        for(int i = 0; i<strs.size(); i++){
            vp.push_back(make_pair(i,strs[i]));
        }
        for(int i = 0; i<vp.size(); i++)
             sort(vp[i].second.begin(),vp[i].second.end());
        
        //sort(strs.begin(),strs.end());
        std::sort(vp.begin(), vp.end(), [](auto &left, auto &right) {
    return left.second < right.second;
});
        for(auto x: vp)
            cout<<x.first<<" "<<x.second<<endl;
        
        
        vector<vector<string>> vvs;
        
        vector<string> vs;
        string prev = "99999";
        for(auto x : vp){
            if(prev == "9999"){
                vs.push_back(strs[x.first]);
                prev = x.second;
                continue;
            }
            if(prev == x.second){
                vs.push_back(strs[x.first]);
                continue;
            }
            if(prev != x.second){
                vvs.push_back(vs);
                vs.clear();
                vs.push_back(strs[x.first]);
                prev = x.second;
            }
        }
        vvs.push_back(vs);
        vvs.erase(vvs.begin(),vvs.begin()+1);
        return vvs;
    }
};