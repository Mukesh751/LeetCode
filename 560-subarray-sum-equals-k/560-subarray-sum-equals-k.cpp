class Solution {
public:

    int subarraySum(vector<int>& nums, int k) {
    
        int res=0;
        map<int, int> m;
        m[0]++;
        int cursum=0;
        for(int i=0; i<nums.size(); i++)
        {
            cursum+=nums[i];
            int diff = cursum - k;
            if(m.find(diff) != m.end())
                res+=m[diff];
            
            m[cursum]++;
        }
        return res;
    }    
};