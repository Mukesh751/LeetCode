// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(int arr[],int n)
    {
        //Your code here
        map<int,int> m;
        for(int i =0 ; i<n ; i++)
          m[arr[i]]++;
        
        vector<pair<int,int>> vp;
        for(auto x : m){
            
                vp.push_back(make_pair(x.second,x.first));
            
        }
        sort(vp.rbegin(), vp.rend(), [](const auto& l, const auto& r){
    return (l.first == r.first) ? l.second > r.second : l.first < r.first;   
});
        
        
        vector<int> ans;
        for(auto x : vp){
            int k = x.first;
            while(k--){
                ans.push_back(x.second);
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}

  // } Driver Code Ends