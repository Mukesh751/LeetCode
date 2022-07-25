class Solution {
public:
     set<vector<int>> ans;
    vector<int> nums;
    void solve(int i, vector<int> v){
        if(i == nums.size()){
            for(auto x : v)
               cout<<x<<" ";
            cout<<endl;
            ans.insert(v);
            return ;
        }
        solve(i+1,v);
        v.push_back(nums[i]);
        sort(v.begin(), v.end());
        solve(i+1,v);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       this->nums = nums;
        
        vector<int> v;
        solve(0,v);
        vector<vector<int>> temp;
        for(auto x : ans)
            temp.push_back(x);
        return temp;
    }
};