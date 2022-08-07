class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
 int m=matrix[0].size(), left=0, right=m * matrix.size() - 1, mid, row, col;
        
        while(left<right) {
            mid = left + (right-left)/2;
            if(matrix[mid/m][mid%m]<target)
                left = mid+1;
            else
                right = mid;
        }
        return matrix[left/m][left%m]==target;
    }
};