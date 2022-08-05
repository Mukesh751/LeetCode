class Solution {
public:
    int n;
    vector<int> org;
    vector<int> nums;
    Solution(vector<int>& nums) {
    n = nums.size();
    org = nums;
    this->nums = nums;
   // sort(nums.rbegin(),nums.rend());
    }
    
    vector<int> reset() {
        nums = org;
        return org;
    }
    
    vector<int> shuffle() {
        for (int i = 0; i < nums.size(); i++)
        {
            int randomIndex = rand() % nums.size();
            swap(nums[i],nums[randomIndex]);
        }
        return nums;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */