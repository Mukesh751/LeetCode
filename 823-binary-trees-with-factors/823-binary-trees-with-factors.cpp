class Solution {
public:
    int mod = 1000000007;
    long long solve(vector<int> & arr,unordered_map<int,long long> &m,unordered_set<int> &st, int i)
    {
        if(m.find(i)!=m.end())
            return m[i];
        long long cnt =1;
        for(auto it:  arr)
        {
            if(it>i)
                break;
            if(i%it==0 && st.find(i/it)!=st.end())
                cnt= cnt%mod + (solve(arr,m,st,i/it)%mod)*(solve(arr,m,st,it)%mod);
        }
        return m[i]=cnt%mod;
    }
    int numFactoredBinaryTrees(vector<int>& arr) {
        unordered_map<int,long long> m;
        unordered_set<int> st;
        sort(arr.begin(),arr.end());
        for(auto it: arr)
            st.insert(it);
        int ans=0;
        for(auto it : arr)
            ans = ans%mod + solve(arr,m,st,it)%mod;
        return ans%mod;
    }
};