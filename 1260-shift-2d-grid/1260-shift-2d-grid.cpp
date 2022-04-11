class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
       
        
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>> ans( m, vector<int> (n, 0));
        //cout<<m<<" "<<n<<endl;
        k=k%(m*n);
        if(n==1)
        {
            if(m==1)
                return grid;
            
            while(k>0)
            {
                
                for(int i=0; i<m; i++)
                { 
                   ans[(i+1)%m][0]=grid[i][0];
                }
            
                for(int i=0; i<m; i++)
                    grid[i][0]=ans[i][0];
                k--;
             }
            return grid;
        }
        
        while(k>0){
            int a=0, b=1;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {

                ans[a][b] = grid[i][j];
            
                 if(b==n-1)
                {
                    b=0;
                    if(a==m-1)
                        a=0;
                    else
                        a++;
                }
                else
                    b++;
            }
        }
        ans[0][0] = grid[m-1][n-1];
            k--;
       for(int i=0; i<m; i++)
           for(int j=0; j<n; j++)
               grid[i][j]=ans[i][j];
            
    }
        return grid;
    }
};