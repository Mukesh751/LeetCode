class Solution {
public:
    vector<int> nums;
    int target;
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        if (nums[left] <= nums[right])
            return nums[0];
        while(left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] > nums[left]) 
                left = mid;
            else if (nums[mid] < nums[left])
                right = mid;
            else break;
        }

        return right;
    }
    int bs( int start, int end){
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid] == target)
                return mid;
            if(nums[mid]>target)
                end = mid-1;
            else
                start = mid+1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int start = findMin(nums);
       // cout<<start<<endl;
        this->nums = nums;
        this->target = target;
        return max(bs(0,start-1),bs(start,nums.size()-1));
    }
};