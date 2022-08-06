class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool ans1 = true;
        for(int i = 1; i<nums.size(); i++){
            if(nums[i] - nums[i-1]<0)
                ans1 = false;
        }            
        bool ans2 = true;
        reverse(nums.begin(),nums.end());
        for(int i = 1; i<nums.size(); i++){
            if(nums[i] - nums[i-1]<0)
                ans2 = false;
        }  
        return ans1||ans2;
    }
};