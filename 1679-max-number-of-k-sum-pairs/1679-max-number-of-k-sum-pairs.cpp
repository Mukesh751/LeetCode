class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        map<int,int> m;
        for(int x: nums)
          m[x]++;
        int count=0;
        for(int x : nums)
        {
            if(m[x]>0 && m[k-x]>0)
            {
                m[x]--;
                m[k-x]--;
                if(m[x]>=0 && m[k-x]>=0)
                count++;
            }
        }
        return count;
    }
};