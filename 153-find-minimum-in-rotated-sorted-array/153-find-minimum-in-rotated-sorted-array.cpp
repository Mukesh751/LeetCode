class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        if (nums[left] <= nums[right]) return nums[0];
        while(left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] > nums[left]) 
                left = mid;
            else if (nums[mid] < nums[left])
                right = mid;
            else break;
        }

        return nums[right];
    }
};