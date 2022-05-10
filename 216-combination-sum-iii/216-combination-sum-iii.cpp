class Solution {
public:
     set<vector<int>> s;
     vector<vector<int>> ans;
    void recurse(int k, int n, int sum, vector<int> v, int i)
    {
        if(sum>n || k<0 || s.find(v)!=s.end())
            return;
        
        if(sum==n && k==0)
        {ans.push_back(v);
         s.insert(v);
         return;
        }
        if(i==0)
            return;
            recurse(k,n,sum,v,i-1);
            v.push_back(i);
            cout<<sum<<" "<<sum+i<<endl;
            recurse(k-1,n,sum+i,v,i-1);
            
        
        return;
    }
        
    vector<vector<int>> combinationSum3(int k, int n) {
       vector<int> v;
        recurse(k,n,0,v,9);
        return ans;
    }
};