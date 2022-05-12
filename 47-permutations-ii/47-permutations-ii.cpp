class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
      vector<vector<int>> ans;
          set<vector<int>> s;
        sort(nums.begin(),nums.end());
        do{
            if(s.find(nums)!=s.end())
                continue;
            ans.push_back(nums);
            s.insert(nums);
        }while(next_permutation(nums.begin(),nums.end()));
        return ans;
    }
};