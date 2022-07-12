class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> hash;
        for(int i=0; i<nums.size(); i++)
            hash[nums[i]]=i;
        for(int i=0; i<nums.size(); i++)
            if(hash.count(target-nums[i]) && hash[target-nums[i]]!=i)
            {ans.push_back(i);
             ans.push_back(hash[target-nums[i]]);
             return ans;
            }
        return ans;}
};