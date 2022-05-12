class Solution {
public:
       vector<vector<int>> ans;

    void solve(vector<int> nums, int index) {
        if (index == nums.size()) {
            ans.push_back(nums);
            return;
        }

        set<int> s;
        for (int i = index; i < nums.size(); i++) {
            if (s.find(nums[i]) != s.end())    
                continue;
            s.insert(nums[i]);
            swap(nums[index], nums[i]);
            solve(nums, index + 1);
            swap(nums[index], nums[i]);
        }
        return;
    }
    vector<vector<int>> permute(vector<int>& nums) {
     solve(nums,0);
        return ans;
    }
};