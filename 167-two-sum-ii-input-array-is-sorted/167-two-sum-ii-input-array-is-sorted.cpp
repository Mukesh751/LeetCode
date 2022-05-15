class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      int ans1=0; 
      int ans2=1;
      for(int i = 0; i<nums.size(); i++)
      {
          int k = target - nums[i];
          int start = i+1;
          int end = nums.size()-1;
          if(k==nums[end])
          {
              ans1=start-1;
              ans2=end;
              break;
          }
          bool f = false;
          while(start<=end)
          {
              int mid = (start + end)/2;
              if(nums[mid] == k)
              {
                  ans1 = i;
                  ans2 = mid;
                  f = true;
                  break;
              }
              if(nums[mid]<k)
                  start = mid+1;
              else
                  end = mid-1;
          }
          if(f)
              break;
      }
        return {ans1+1,ans2+1};
    }
};