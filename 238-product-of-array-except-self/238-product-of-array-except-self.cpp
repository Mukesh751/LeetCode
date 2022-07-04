class Solution {
public:
    int calc(vector<int>& nums, int idx)
    {
        int p = 1;
        for(int i=0; i<nums.size(); i++){
            if(i==idx)
                continue;
            
            p*=nums[i];
        }
        return p;
    }
    vector<int> productExceptSelf(vector<int>& nums) {
        int pro = 1;
        int zero = 0;
        for(int x : nums)
        {  pro*=x;
           if(x==0)
               zero++;
        }
        vector<int> ans(nums.size());
        
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == 0 && zero == 1)
                ans[i] = calc(nums,i);
           else if(zero>1)
                ans[i] = 0;
           else if(nums[i]!=0)
                 ans[i] = pro/nums[i];
        }
        return ans;
    }
};