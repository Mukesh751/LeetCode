class Solution {
public:
    vector<vector<int>> ans;
    vector<int> nums;
    void solve(int i, vector<int> v){
        if(i == nums.size()){
            for(auto x : v)
                cout<<x<<" ";
            cout<<endl;
            ans.push_back(v);
            return;
        }
        solve(i+1,v);
        v.push_back(nums[i]);
        solve(i+1,v);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        this->nums = nums;
        
        vector<int> v;
        solve(0,v);
        return ans;
    }
};