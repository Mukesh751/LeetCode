class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        int k=0;
        while(k<nums.size())
        {for(int i=0; i<nums[k];i++)
            ans.push_back(nums[k+1]);
         k+=2;
        }
        return ans;
    }
};