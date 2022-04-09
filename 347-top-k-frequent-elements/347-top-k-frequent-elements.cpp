class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>> v;
        map<int,int> m;
        for(int i=0; i<nums.size(); i++)
            m[nums[i]]++;
        
        map<int,int>::iterator it;
        for(it=m.begin(); it!=m.end(); it++)
        {
            pair<int,int> p=make_pair(it->second,it->first);
            v.push_back(p);
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        vector<int> ans;
        for(int i=0; i<k; i++)
        {
            ans.push_back(v[i].second);
        }
        return ans;
    }
};