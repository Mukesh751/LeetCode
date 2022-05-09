class Solution {
public:
    double average(vector<int>& nums) {
        int mn = INT_MAX;
        int mx = INT_MIN;
        double ans = 0;
        for(int x : nums)
        {
            mn = min(mn,x);
            mx = max(mx,x);
            ans+=x;
        }
        ans-=(mn+mx);
        int count = nums.size()-2;
        
        return ans/count;
    }
};