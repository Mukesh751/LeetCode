class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
         for(int i=1; i<nums.size(); i++){
            nums[i] += nums[i-1];
            if(nums[i]%k == 0 || (i>=2 && nums[i]-nums[i-2] == 0)) 
                return true;
            if(nums[i] > k)
                for(int j=0; j<i-1; j++)
                    if((nums[i]-nums[j]) % k == 0) 
                        return true;
        }
        return false;
    }
};