class Solution {
public:
    
    int findPeakElement(vector<int>& nums) {
    int start =0;
    int end = nums.size()-1;
    int mid;

    while(start <= end)
    {
        
        mid = (start+end)/2;
         if(mid==0)
        {
             if(mid == nums.size()-1)
                 return mid;
            if(nums[mid]>nums[mid+1])
                return mid;
             else start = mid+1;
        }
        else if (mid == nums.size()-1)
        {
            if(nums[mid] >nums[mid-1])
            return mid;
            else end = mid-1;
        }   
        else 
        if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])
        {
            return mid;
        }
        else if(nums[mid]<nums[mid-1])
        {
            end = mid-1;
        }
        else if(nums[mid]<nums[mid+1])
        {
            start = mid+1;
        }
   
        
    }
    return mid;
    }
};