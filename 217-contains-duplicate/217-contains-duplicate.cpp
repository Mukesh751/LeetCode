class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      map<int,int> m;
        for(int x: nums)
        {    if(m.find(x)!=m.end())
                return true;
            else
                m[x]++;
        }
        return false;
    }
};