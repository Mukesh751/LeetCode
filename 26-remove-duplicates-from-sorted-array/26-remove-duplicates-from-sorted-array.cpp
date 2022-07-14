class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev = INT_MIN;
        for(int i=0; i< nums.size(); i++){
            if(prev == INT_MIN)
            { prev = nums[i]; continue;}
            
            if(nums[i] == prev){
                nums.erase(nums.begin()+i);
                i--;
            }
            else
                prev = nums[i];
        }
        return nums.size();
    }
};