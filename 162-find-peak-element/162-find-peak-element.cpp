class Solution {
public:
    
    int findPeakElement(vector<int>& nums) {
           int n = nums.size();
        int i=0;
        int j =n-1;
        while(i<j)
        {
            int mid = (i+j)/2;
            if(nums[mid]>nums[mid+1])
            {
                j = mid;
            }
            else{
            
                i = mid+1;
            }
            
        }
        return i;
    }
};