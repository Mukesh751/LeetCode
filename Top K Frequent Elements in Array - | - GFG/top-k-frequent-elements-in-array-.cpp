// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        
        map<int,int> v;
        for(int x : nums)
         v[x]++;
        vector<pair<int,int>> vp;
        for(auto x : v){
            
                vp.push_back(make_pair(x.second,x.first));
            
        }
        sort(vp.rbegin(), vp.rend());
        vector<int> ans;
        for(int i = 0; i<k; i++)
        ans.push_back(vp[i].second);
        
        // for(int i = 0; i<vp.size(); i++)
        //  cout<<vp[i].first<<" "<<vp[i].second<<endl;
        
        return ans;
    }
};


// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends