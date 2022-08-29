class Solution {
public:
    int x[4]={-1,0,1,0};
    int y[4]={0,1,0,-1};
    
    void dfs(vector<vector<char>>& grid,int i,int j){
        grid[i][j]='0';
        for(int z=0;z<4;z++){
            int cx=i+x[z];
            int cy=j+y[z];
            if(cx>=0 && cy>=0 && cx<grid.size() && cy<grid[0].size() && grid[cx][cy]=='1'){
                dfs(grid,cx,cy);
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int c=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    dfs(grid,i,j);
                    c++;
                }
            }
        }
        return c;
    }

};