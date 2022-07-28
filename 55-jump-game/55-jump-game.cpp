class Solution {
public:
    
        
    
    bool canJump(vector<int>& nums) {
        
       int jump = nums.size() - 1;
        
        int i = jump - 1;
        while(i >= 0) {
            if (i + nums[i] >= jump) {
                jump = i;
            }
            --i;
        }
        return jump == 0;
    }
    
};