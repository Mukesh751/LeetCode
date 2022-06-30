class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(int x : nums)
          sum+=x;
        
        int ls = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            if(ls == sum - nums[i])
                return i;
            
            ls+= nums[i];
            sum-=nums[i];
        }
        return -1;
    }
};