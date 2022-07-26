class Solution {
public:
    long long min(long long a, long long b){
        if(a<b)
            return a;
        return b;
    }
    long long minimumRemoval(vector<int>& beans) {
        sort(beans.begin(),beans.end());
        //brute
        // long long int mn = INT_MAX;
        // for(int i = 0; i<beans.size(); i++){
        //     long long int count = 0;
        //     for(int j = 0; j<beans.size(); j++){
        //         if(beans[j]<beans[i])
        //             count+=beans[j];
        //         if(beans[j] == beans[i])
        //             continue;
        //         if(beans[j]>beans[i])
        //             count+=(beans[j]-beans[i]);
        //     }
        //     mn = min(count,mn);
        // }
        // return mn;
        
        long long ans = LLONG_MAX;
        long long sum = 0;
        for(auto x : beans)
            sum+=x;
        long long right = 0;
        long long left = 0;
        for(int i = 0; i<beans.size(); i++){
            right = sum - left - (long long)(beans.size()-i)*beans[i];
            ans = min(ans ,left + right);
            left+=beans[i];
        }
        return ans;
    }
};