class Solution {
public:
   
    int nthUglyNumber(int n){
     priority_queue<long long, vector<long long>, greater<long long>> minhp;
    minhp.push(1);
    map<long long,int> mp;
    int cnt = 0;
    long long ans;
    mp[1] =1;
    while(cnt < n){
        ans = minhp.top();
        minhp.pop();cnt++;
        if(mp[ans*2] == 0)
            minhp.push(ans*2),mp[ans*2]=1;
        if(mp[ans*3] == 0)
            minhp.push(ans*3),mp[ans*3]=1;
        if(mp[ans*5] == 0)
            minhp.push(ans*5),mp[ans*5]=1;
    }
    return ans;
}
    
};