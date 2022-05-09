class Solution {
public:
    double average(vector<int>& nums) {
        int mn = INT_MAX;
        int mx = INT_MIN;
        for(int x : nums)
        {
            mn = min(mn,x);
            mx = max(mx,x);
        }
        double ans = 0;
        int count = 0;
        for(int x : nums)
        {
            if(x!=mn && x!=mx)
            {
                ans += x;
                count++;
            }
        }
        return ans/count;
    }
};