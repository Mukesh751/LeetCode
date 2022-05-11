class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
  int min=1e4;
        int pos=-1;
        int d=1;
        
        for(int i=0; i<points.size(); i++)
        {
            if(points[i][0]==x || points[i][1]==y)
            {    d = points[i][0]-x + points[i][1]-y;
            if(d<0)
                d=d*(-1);
           
             if(d<min)
             {min=d;
              pos=i;
             }
             
             }
        }
        return pos;
    }
};