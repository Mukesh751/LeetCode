class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        for(int i = n-1; i>=0; i--)
        {
            int x = nums[i];
            nums[i] = x*x;
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};