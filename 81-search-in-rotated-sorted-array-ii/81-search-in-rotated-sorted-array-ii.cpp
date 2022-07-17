class Solution {
public:
   int findpivot(vector<int>& nums,int start,int end,int mid){
        if(nums[0] <= nums[nums.size()-1]) return 0;
        while(start<end){
            if(nums[mid]>=nums[0]) start=mid+1;
            else end=mid;
            mid=start+(end-start)/2;
        }
        return start;
    }
    int binarysearch(vector<int>& nums,int start,int end,int target){
        int mid = start+(end-start)/2;
        while(start<=end){
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target) end=mid-1;
            else start=mid+1;
            mid=start+(end-start)/2;
        }
        return -1;
    }
    int s(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1,mid=start+(end-start)/2;
        int pivot = findpivot(nums,start,end,mid);
        return max(binarysearch(nums,start,pivot-1,target),binarysearch(nums,pivot,end,target));
    }
    bool search(vector<int>& nums, int target) {
       
       for(auto x : nums)
           if(x == target)
               return true;
        
        return false;
    }
};