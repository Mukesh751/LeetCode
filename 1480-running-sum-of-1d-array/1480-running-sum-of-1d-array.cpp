class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        long long int sum=0;
        for(int x : nums)
        {
            sum+=x;
            ans.push_back(sum);
        }
        return ans;
        
    }
};