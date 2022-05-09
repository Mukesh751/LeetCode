class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        if(target < nums[0])
            return 0;
        if(target > nums[end])
            return end+1;
        
        while(start<end)
        {
            if(start == end-1)
            {
                if(nums[start]==target)
                    return start;
                else
                    return end;
            }
            int mid = (start + end)/2;
            if(nums[mid] == target)
             return mid;
            if(nums[mid]>target)
                end = mid;
            else
                start = mid;
        }
        return 0;
    }
};