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

    vector<vector<int>> permuteUnique(vector<int>& nums) {
      // vector<vector<int>> ans;
      //     set<vector<int>> s;
      //   sort(nums.begin(),nums.end());
      //   do{
      //       if(s.find(nums)!=s.end())
      //           continue;
      //       ans.push_back(nums);
      //       s.insert(nums);
      //   }while(next_permutation(nums.begin(),nums.end()));
        solve(nums,0);
        return ans;
    }
};