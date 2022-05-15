class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0; i<=nums.size(); i++)
        {
            int temp = nums.size();
            int start = 0;
            int end = nums.size()-1;
            while(start<=end)
            {
                int mid = end + start;
                mid = mid/2;
                if(nums[mid] >= i)
                {
                    temp = mid;
                    end = mid-1;
                }
                else
                    start = mid + 1;
            }
            if(nums.size()-temp == i)
                return i;
        }
        return -1;
    }
};

