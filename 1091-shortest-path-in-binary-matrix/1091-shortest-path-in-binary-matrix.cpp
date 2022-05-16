class Solution {
public:
   bool isValid(int r, int c, vector<vector<int>> &grid , int m , int n){
    if(r>=0 && c>=0 && r<=m && c<=n && grid[r][c]==0)
        return true;
    return false;
}
int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
    if(grid[0][0]==1)
        return -1;
    vector<vector<int>> dir = {{0,-1},{0,1},{-1,0},{1,0},{-1,-1},{-1,1},{1,-1},{1,1}};
    queue<pair<int,int>> q;
    q.push({0,0});
    grid[0][0]=1;
    int res=0;
    int m=grid.size()-1;
    int n=grid[0].size()-1;
    while(!q.empty()){
        int ls=q.size();
        res++;
        for(int i=0;i<ls;i++){
            pair<int,int>p=q.front();
            q.pop();
            if(p.first==m && p.second==n)
                return res;
            for(int j=0;j<dir.size();j++){
                int r=p.first+dir[j][0];
                int c=p.second+dir[j][1];
                if(isValid(r,c,grid,m,n)){
                    q.push({r,c});
                    grid[r][c]=1;
                }
            }
        }
    }
    return -1;
}
};