class Solution {
public:
    int x[4]={-1,0,1,0};
    int y[4]={0,1,0,-1};
    
    void dfs(vector<vector<int>>& grid,int i,int j){
        grid[i][j]= 1;
        for(int z=0;z<4;z++){
            int cx=i+x[z];
            int cy=j+y[z];
            if(cx>=0 && cy>=0 && cx<grid.size() && cy<grid[0].size() && grid[cx][cy]== 0){
                dfs(grid,cx,cy);
            }
        }
    }
    
    int numIslands(vector<vector<int>>& grid) {
        int c=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]== 0){
                    dfs(grid,i,j);
                    c++;
                }
            }
        }
        return c;
    }
    int closedIsland(vector<vector<int>>& grid) {
       vector<vector<int>> g = grid;
       int n = numIslands(grid);
       
        int c = 0;
        for(int i = 0; i<g.size(); i++){
            if(g[i][0] == 0 ){
                dfs(g,i,0);
                c++;
            }
            if(g[i][g[0].size()-1] == 0 ){
                dfs(g,i,g[0].size()-1);
                c++;
            }
        }
        for(int j = 0; j<g[0].size(); j++){
            if(g[0][j] == 0 ){
                dfs(g,0,j);
                c++;
            }
            if(g[g.size()-1][j] == 0 ){
                dfs(g,g.size()-1,j);
                c++;
            }
        }
        return n - c;
    }
};