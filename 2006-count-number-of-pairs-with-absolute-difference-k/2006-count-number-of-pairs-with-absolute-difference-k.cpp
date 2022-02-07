class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        map<int,int> m;
        
        int c=0;
        for(int x : nums)
        {       
                c+=m[x-k]+m[k+x];
         m[x]++;
    }
        return c;
    }
};