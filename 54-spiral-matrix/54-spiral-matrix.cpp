class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = rows - 1;
    int endingCol = cols - 1;
    
    int count = 0;
    int total = rows*cols;
    vector<int> ans;
    while(count < total)
    {
                    

        for(int index = startingCol; index <=endingCol and count<total ;index++)
        {
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++; 
         for(int index = startingRow; index <=endingRow and count<total ;index++)
        {
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--; 
         for(int index = endingCol; index >= startingCol and count<total ;index--)
        {
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;
          for(int index = endingRow; index >= startingRow and count<total ;index--)
        {
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;  
              
    }
    return ans;
}
};