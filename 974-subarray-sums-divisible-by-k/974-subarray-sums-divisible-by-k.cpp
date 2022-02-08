class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int count=0,sum=0;
        map<int,int>m;
        m[0]++;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(m.find((k+(sum%k))%k)!=m.end())
                count+=m[(k+(sum%k))%k];
            m[(k+(sum%k))%k]++;
        }
        return count;
    }
};