class Solution {
public:
    set<int> row;
    set<int> col;
    vector<vector<int>> mat;
    void solve (int i, int j)
    {
        //cout<<i<<" "<<j<<endl;

        if(col.find(j) == col.end())
        for(int k = 0; k<mat.size(); k++)
            mat[k][j] = 0;
        
        if(row.find(i) == row.end())
        for(int k = 0; k<mat[0].size(); k++)
            mat[i][k] = 0;
        
         if(row.find(i) == row.end())
             row.insert(i);
        
        if(col.find(j) == col.end())
            col.insert(j);
        
    }
    void setZeroes(vector<vector<int>>& matrix) {
        mat = matrix;
        for(int i = 0; i<matrix.size(); i++){
            for(int j = 0; j<matrix[0].size(); j++){
                if(matrix[i][j] == 0)
                    solve(i, j);
            }
        }
        // for(auto x: mat){
        //     for(auto y: x){
        //         cout<<y<<" ";
        //     }
        //     cout<<endl;
        // }
        matrix = mat;
    }
};