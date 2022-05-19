class Solution {
public:
        int dp[25];
    
   int numTrees(int n) {

    memset(dp,-1,sizeof(dp));
    return solve(n);
}
int solve(int n){
    if(n==0) 
        return 1;
    if(dp[n]!=-1) 
        return dp[n];
    int res=0;
    for(int i=1;i<=n;i++){
        res+=solve(i-1)*solve(n-i);
    }
    return dp[n]=res;
}
};