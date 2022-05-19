class Solution {
public:
    int count(int n)
    {
        int one = 0;
        for(;n>0; n=n/2)
            if(n%2 == 1)
                one++;
        
        return one;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> v;
        for(int x : arr)
            v.push_back(make_pair(count(x),x));
        sort(v.begin(),v.end());
        vector<int> ans;
        for(auto x : v)
            ans.push_back(x.second);
        return ans;
    }
};