class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> v;
        for(int i = 0; i<mat.size(); i++)
        {
            int start = 0;
            int end = mat[0].size()-1;
            while(start<=end)
            {
                int mid = (start+end)/2;
                if(mat[i][mid] == 0)
                    end = mid-1;
                else
                    start = mid+1;
            }
            v.push_back({start,i});
        }
        sort(v.begin(),v.end());
    
        vector<int> ans;
        for(auto x : v)
            ans.push_back(x.second);
         ans.resize(k);
        return ans;
    }
};