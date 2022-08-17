class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        // for(int i=0; i<matrix.size(); i++)
        // {
        //     int l = 0;
        //     int r = matrix[0].size()-1;
        //     if(matrix[i][r]>target)
        //         continue;
        //    while (l <= r) {
        // int m = l + (r - l) / 2;
        // if (matrix[i][m] == target)
        //     return true;
        // if (matrix[i][m] < target)
        //     l = m + 1;
        // else
        //     r = m - 1;
        //  }
        // }
        // return false;
        
//         for(int i = 0; i<matrix.size(); i++){
//             int l = 0;
//             int r = matrix[0].size()-1;
            
//             while(l<=r){
//                 int m = (l+r)/2;
//                 if(matrix[i][m] == target)
//                     return true;
//                 if(matrix[i][m]>target)
//                     r = m-1;
//                 else
//                     l = m+1;
//             }
//         }
//         return false;
//         int m = matrix.size();
//         int n= matrix[0].size();
//         auto i = upper_bound(matrix[0].begin(), matrix[0].end(), target) - matrix[0].begin();
        
    
        
//         bool ans = false;
//         for(int j=0;j<m ;j++){
//            if( binary_search(matrix[j].begin(), matrix[j].begin()+i, target)){
//                ans = true;
//            }
//         }
        
       int m = matrix.size(), n = matrix[0].size();
        int r = m - 1, c = 0;
        
        while (r >= 0 && c < n)
        {
            if (matrix[r][c] == target)
                return true;
            
            if (matrix[r][c] < target)
                c++;
            else
                r--;
        }
        
        return false;
    }
};