class Solution {
public:
    int minOperations(int n) {
        vector<int> v;
        int sum=0;
        for(int i=0; i<n; i++)
        {
            int x = 2*i + 1;
            sum+=x;
            v.push_back(x);
        }
        int target = sum/n;
        int ans=0;
        for(int i=0; i<n/2 ; i++)
            ans+=(target - v[i]);
        
        return ans;
    }
};