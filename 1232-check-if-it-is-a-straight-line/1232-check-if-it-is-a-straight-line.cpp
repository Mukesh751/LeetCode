class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates[1][1] - coordinates[0][1];
        int d = coordinates[1][0] - coordinates[0][0];
        
        for(int i=0; i<coordinates.size(); i++)
        {
            int y = coordinates[i][1] - coordinates[0][1];
            int x = coordinates[i][0] - coordinates[0][0];
            
            if(y*d == n*x)
                continue;
            else
                return false;
        }
        return true;
    }
};