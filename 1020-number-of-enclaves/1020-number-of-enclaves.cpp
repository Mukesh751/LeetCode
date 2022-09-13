class Solution {
public:
      int x[4]={-1,0,1,0};
    int y[4]={0,1,0,-1};
    
    void dfs(vector<vector<int>>& grid,int i,int j){
        grid[i][j]=0;
        for(int z=0;z<4;z++){
            int cx=i+x[z];
            int cy=j+y[z];
            if(cx>=0 && cy>=0 && cx<grid.size() && cy<grid[0].size() && grid[cx][cy]==1){
                dfs(grid,cx,cy);
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        if(grid.size() < 3 || grid[0].size() < 3)
            return 0;
        for(int i = 0; i<grid.size(); i++){
            if(grid[i][0] == 1)
                dfs(grid,i,0);
            if(grid[i][grid[0].size()-1]==1)
                dfs(grid,i,grid[0].size()-1);
        }
        for(int j = 0; j<grid[0].size(); j++){
            if(grid[0][j] == 1)
                dfs(grid,0,j);
            if(grid[grid.size()-1][j] == 1)
                dfs(grid,grid.size()-1,j);
        }
        int count = 0;
         for(int i = 1; i<grid.size()-1; i++)
            for(int j = 1; j<grid[0].size()-1; j++)
                if(grid[i][j] == 1)
                    count++;
        
        return count;
    }
};