class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int zeroes = 0;
        vector<int> m(300000,0);
        int mx = 0;
        for(auto x : changed){
            if(x == 0)
                zeroes++;
            else
            m[x]++;
            mx = max(mx,x);
        }
        // for(auto x : m)
        //     cout<<x<<" ";
        vector<int> ans;
        if(zeroes%2 != 0)
            return {};
        else{
            for(int i = 0; i<zeroes/2; i++)
                ans.push_back(0);
        }
        mx = mx+2;
        for(int i = 1; i<=mx; i++){
            if(m[i]>0){
            if(m[i]*m[2*i] == 0 || m[i]>m[2*i]){
                return {};
            }
                int x = m[i];
                m[i]-=x;
                m[2*i] -= x;
                for(int j = 0; j<x; j++)
                  ans.push_back(i);
            }
            
        }
        return ans;
    }
};