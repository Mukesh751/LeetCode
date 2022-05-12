class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int k = nums[1] - nums[0];
        for(int i=2; i<nums.size(); i++)
        {
            if((nums[i] - nums[i-1]) != k)
                return false;
        }
        return true;
    }
};