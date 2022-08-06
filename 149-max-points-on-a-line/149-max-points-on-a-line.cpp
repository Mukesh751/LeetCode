class Solution {
public:
    
   
    int maxPoints(vector<vector<int>>& points) {
            if(points.size()<=2)
                    return points.size();
            
            int ans=INT_MIN;
            
        for(int i=0;i<points.size();i++)
        {
                for(int j=i+1;j<points.size();j++)
                {
                        int dy=points[j][1]-points[i][1];
                        int dx=points[j][0]-points[i][0];
                                int count=0;
                        

                        for(int k=0;k<points.size();k++)
                        {
                                
                                int a=dx*(points[k][1]-points[i][1]);
                                int b=dy*(points[k][0]-points[i][0]);
                                if(a==b)
                                        count++;
                        }
                                ans=max(ans,count);
                }
        }
                                return ans;
    }
    
};