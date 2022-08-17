class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0; int high = nums.size()-1;
        if(nums.size() == 1)
            return nums[0];
        while(low<=high){
            int mid = low + (high-low)/2;
            
            if(mid == 0 && nums[mid+1] != nums[mid])
                return nums[mid];
            
            else if(mid == nums.size()-1 && nums[mid-1]!=nums[mid])
                return nums[mid];
            
            else if(nums[mid] != nums[mid+1] && nums[mid] != nums[mid-1])
                return nums[mid];
            
            else if(nums[mid] == nums[mid+1])
                   mid++;
            
            if(mid%2 == 1)
                low = mid+1;
            else
                high = mid-2;
        }
        return 0;
    }
};