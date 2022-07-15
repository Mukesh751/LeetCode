class Solution {
public:
    int mx = 0;
    vector<vector<int>> grid;
    int solve(int i, int j)
    {
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]==0)
            return 0;
        
        grid[i][j] = 0;
        return solve(i+1,j)+solve(i-1,j)+solve(i,j+1)+solve(i,j-1)+1;
    }
    int maxAreaOfIsland(vector<vector<int>>& g) {
        grid = g;
        int m = 0;
        for(int i=0; i<grid.size(); i++)
        { for(int j = 0; j<grid[i].size(); j++)
            {   
                if(grid[i][j]==1)
                    m = max(m,solve(i,j));
            }
        }
        return m;
    }
};