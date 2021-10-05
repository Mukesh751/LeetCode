class Solution {
public:
    int minPairSum(vector<int>& nums) {
        
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int max = nums[n-1] + nums[0];
        for(int i=1; i<=n/2; i++)
            if(nums[i] + nums[n-1-i] > max)
                max = nums[i] + nums[n-1-i];
        
        return max;
    }
};