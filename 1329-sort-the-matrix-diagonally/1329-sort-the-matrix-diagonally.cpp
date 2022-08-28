class Solution {
public:
    void get(vector<vector<int>> &ans, int m, int n){
        vector<int> temp;
        int i = m, j = n;
        while(j<ans[0].size() && i<ans.size()){
            temp.push_back(ans[i][j]);
            i++;
            j++;
        }
        sort(temp.begin(),temp.end());
         i = m, j = n;
        int k = 0;
        while(j<ans[0].size() && i<ans.size()){
            ans[i][j] = temp[k];
            k++;
            i++;
            j++;
        }
    }
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        for(int i = 0; i<mat.size(); i++)  {
            get(mat,i,0);
        }
        for(int j = 1; j<mat[0].size(); j++)  {
            get(mat,0,j);
        }
        return mat;
    }
};