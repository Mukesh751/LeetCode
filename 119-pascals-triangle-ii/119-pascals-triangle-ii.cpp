class Solution {
public:
    
     vector<vector<int>> ans;
    
    void solve(int r, int k)
    {
        if(k>r-1)
            return;
        
        vector<int> temp;
        int sum = 1;
        
        if(k==0)
            temp.push_back(sum);
        else
        {
            temp.push_back(sum);
            for(int i=0; i<ans[k-1].size()-1; i++)
            {
                sum = ans[k-1][i] + ans[k-1][i+1];
                temp.push_back(sum);
            }
            sum = 1;
            temp.push_back(sum);
        }
     
        ans.push_back(temp);
        solve(r,k+1);
        return;
    }
    
    
    vector<int> getRow(int rowIndex) {
        solve(34,0);
        return ans[rowIndex];
    }
};