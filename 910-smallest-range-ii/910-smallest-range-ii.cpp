class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
       int n=nums.size();
        
        sort(nums.begin(),nums.end());
        int ans=nums[n-1]-nums[0];
        for(int i=0;i<n-1;i++)
        {
            
            int mn=min(nums[i+1]-k,nums[0]+k);
            int mx=max(nums[i]+k,nums[n-1]-k);
            ans=min(ans,mx-mn);
            
        }
        return ans;
    }
};