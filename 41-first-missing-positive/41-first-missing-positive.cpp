class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       vector<int> p;
        for(int i=0; i<nums.size(); i++)
            if(nums[i]>0)
                p.push_back(nums[i]);
        
        sort(p.begin(),p.end());
        int x=1;
        for(int i=0; i<p.size(); i++)
            if(x==p[i])
                x++;
        
        return x;
    }
};