class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        if(nums[start]==target)
            return start;
        else if(nums[end]==target)
            return end;
        while(start<end)
        {
            if(start == end-1)
            {
                if(nums[start]==target)
                   return start;
        else if(nums[end]==target)
                   return end;
                break;
            }
            int mid = start + end;
            mid/=2;
            if(nums[mid]==target)
                return mid;
            if(nums[mid]>target)
                end = mid;
            else
                start = mid;
        }
        return -1;
    }
};