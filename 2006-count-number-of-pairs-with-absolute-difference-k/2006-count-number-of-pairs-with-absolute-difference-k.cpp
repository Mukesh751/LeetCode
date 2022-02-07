class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        map<int,int> m;
        for(int x : nums)
            m[x]++;
        
        int c=0;
        for(int x : nums)
            if(m.count(x+k))
                c+=m[x+k];
        
        return c;
    }
};