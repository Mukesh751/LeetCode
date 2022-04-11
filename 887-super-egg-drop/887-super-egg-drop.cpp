class Solution {
public:
    int dp[101][10001];
    int solve(int e, int f)
    {
        if(f==0 || f==1)
            return f;
        if(e==1)
            return f;
        
        if(dp[e][f]!=-1)
            return dp[e][f];
        
      int mn=INT_MAX;
    int start=1,end=f;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        int low=solve(e-1,mid-1);
        int high=solve(e,f-mid);
        int temp=1+max(low,high);
        mn=min(mn,temp);
        
        if(high>low)
            start=mid+1;
        else end=mid-1;
    }
        return dp[e][f]=mn;
    }
    int superEggDrop(int k, int n) {
        memset(dp, -1, sizeof(dp));
        return solve(k,n);
    }
};