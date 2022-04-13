class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int> m;
        for(int x  : nums)
            m[x]++;
        vector<int> ans;
        for(int x : nums)
            if(m[x]>1)
            {ans.push_back(x); m[x]=0;}
        return ans;
    }
};