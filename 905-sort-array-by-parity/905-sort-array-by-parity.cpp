class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> ans;
        for(int x: nums)
            if(x%2==0)
                ans.push_back(x);
         for(int x: nums)
            if(x%2==1)
                ans.push_back(x);
        return ans;
    }
};