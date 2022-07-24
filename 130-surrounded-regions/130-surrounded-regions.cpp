class Solution {
public:
   void dfs(vector<vector<char>>& a,int &n,int &m,int i,int j){
        if(i >= n || j >= m || i < 0 || j < 0 || a[i][j] != 'O') return;
        a[i][j] = 'A';
        dfs(a,n,m,i + 1,j);
        dfs(a,n,m,i - 1,j);
        dfs(a,n,m,i,j + 1);
        dfs(a,n,m,i,j - 1);
    }
    void solve(vector<vector<char>>& a) {
        int n = a.size(), m = a[0].size();
        for(int i = 0;i<n;i++){
            if(a[i][0] == 'O')dfs(a,n,m,i,0);
            if(a[i][m - 1] == 'O') dfs(a,n,m,i,m-1);
        }
        for(int j = 0;j<m;j++){
            if(a[0][j] == 'O' )dfs(a,n,m,0,j);
            if(a[n-1][j] == 'O') dfs(a,n,m,n - 1,j);
        }
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(a[i][j] == 'A') a[i][j] = 'O';
                else if(a[i][j] == 'O') a[i][j] = 'X';
            }
        }
    }
};