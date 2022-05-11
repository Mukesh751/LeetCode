class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    for(int i=0; i<nums.size(); i++)
    {
        int x = target - nums[i];
        int l = i+1;
        int r = nums.size()-1;
          while (l <= r) {
        int m = l + (r - l) / 2;
 
     
        if (nums[m] == x)
            return {i+1,m+1};
 
  
        if (nums[m] < x)
            l = m + 1;
        else
            r = m - 1;
         }
     }
        return {};
    }
};