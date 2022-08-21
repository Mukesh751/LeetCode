class Solution {
public:
  int m,n;  
    bool isSafe(vector<vector<int>>& h, int i, int j, int &val)
    {
        if(h[i][j]<=val)
            return true;
        return false;
    }
    
    bool pacific(vector<vector<int>>& h, int i, int j,vector<vector<bool>>& v)
    {
        if(i==0 || j==0 || v[i][j])
            return true;
        if(h[i][j]==-1)
            return false;
        
        bool up=false,down=false,left=false,right=false;
        
        int temp = h[i][j];
        h[i][j] = -1;
        
        if(isSafe(h,i-1,j,temp))
            up = pacific(h,i-1,j,v);
        if(i+1!=m && isSafe(h,i+1,j,temp))
            down = pacific(h,i+1,j,v);
        if(isSafe(h,i,j-1,temp))
            left = pacific(h,i,j-1,v);
        if(j+1!=n && isSafe(h,i,j+1,temp))
            right = pacific(h,i,j+1,v);
        
        h[i][j] = temp;
        
        return v[i][j] = (left || right || up || down);           
    }

    bool atlantic(vector<vector<int>>& h, int i, int j,vector<vector<bool>>& v)
    {
        if(i==m-1 || j==n-1 || v[i][j])
            return true;
        if(h[i][j]==-1)
            return false;
          
        bool up=false,down=false,left=false,right=false;
        
         int temp = h[i][j];
        h[i][j] = -1;
        
        if(i-1>=0 and isSafe(h,i-1,j,temp))
            up = atlantic(h,i-1,j,v);
        if(isSafe(h,i+1,j,temp))
            down = atlantic(h,i+1,j,v);
        if(j-1>=0 and isSafe(h,i,j-1,temp))
            left = atlantic(h,i,j-1,v);
        if(isSafe(h,i,j+1,temp))
            right = atlantic(h,i,j+1,v);
			
        h[i][j] = temp;
        return v[i][j] = (left || right || up || down);          
    }
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& h) {
        
        m = h.size();
        n = h[0].size();
        vector<vector<bool>> dp(m,vector<bool>(n,false));
        vector<vector<bool>> dp2(m,vector<bool>(n,false));
        vector<vector<int>> ans;
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                bool a = pacific(h,i,j,dp);
                bool b = atlantic(h,i,j,dp2);
                if(a and b)
                {
                    ans.push_back({i,j});
                }

            }
        }
        return ans;       
    }
};