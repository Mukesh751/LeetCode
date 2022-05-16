class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for(int i=0 ; i<grid.size(); i++)
        {
            int start = 0;
            int end = grid[i].size()-1;
            if(grid[i][start] < 0)
            {
                count+=end+1;
                continue;
            }
            if(grid[i][end]>0)
                continue;
            
            while(start<=end)
            {
                int mid = (start + end)/2;
               if(grid[i][mid]<0)
                    end = mid-1;
                else
                    start = mid+1;
            }
            count += grid[i].size() - start;
        }
        return count;
    }
};