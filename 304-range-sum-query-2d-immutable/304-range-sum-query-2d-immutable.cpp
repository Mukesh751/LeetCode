class NumMatrix {
public:
 vector<vector<int>>gd;
NumMatrix(vector<vector<int>>& mat) {
    int n=mat.size();
    int m=mat[0].size();
    gd.resize(n+1,vector<int>(m+1 , 0));
    for(int i=1;i<=n;i++){
       gd[i][1]=mat[i-1][0];
       for(int j=1;j<=m;j++){
         gd[i][j]=gd[i][j-1]+mat[i-1][j-1];
       }
    }
}

int sumRegion(int row1, int col1, int row2, int col2) {
    int sum=0;
    for(int i=min(row1,row2)+1;i<=max(row2,row1)+1;i++){
       sum+=gd[i][max(col1,col2)+1]-gd[i][min(col1,col2)];
    }
    return sum;
}
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */