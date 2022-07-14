class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(auto x : nums)
            s.insert(x);
        
        int n = nums.size();
        nums.clear();
        int ans = s.size();
        for(auto x : s)
            nums.push_back(x);
        
        // while(nums.size()<n)
        //     nums.push_back(nums[0]);
        
        return ans;
    }
};