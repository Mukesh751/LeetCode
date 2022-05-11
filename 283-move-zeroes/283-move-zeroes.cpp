class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        while(n--)
        {
           if(nums[i]==0)
           {
               nums.erase(nums.begin()+i);
               nums.push_back(0);
               i--;
           }
            i++;
        }
    }
};