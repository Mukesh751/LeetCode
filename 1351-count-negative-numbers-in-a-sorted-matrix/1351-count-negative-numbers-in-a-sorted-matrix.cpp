class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
         int count = 0;
    int i = 0;
    int j = grid[i].size() - 1;
    while (j >= 0 && i < grid.size())
    {
        if (grid[i][j] >= 0)
        {
            i++;
        }
        else
        {
            j--;
            count += grid.size() - i;
        }
    }
    return count;
    }
};