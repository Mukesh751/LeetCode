class Solution {
public:
    
    vector<int> nsl(vector<int>& heights)
    {
        stack<pair<int,int>> s;
        vector<int> v;
        
        for(int i=0; i<heights.size(); i++)
        {
            if(s.size()==0)
                v.push_back(-1);
            else if(s.size()>0 && heights[i]>s.top().first)
                 v.push_back(s.top().second);
            else
            {
                while(s.size()>0 && s.top().first>=heights[i])
                    s.pop();
                if(s.size()==0)
                  v.push_back(-1);
                else
                  v.push_back(s.top().second);
            }
            s.push({heights[i],i});
        }
        return v;
    }
    
        vector<int> nsr(vector<int>& heights)
    {
        stack<pair<int,int>> s;
        vector<int> v;
        
        for(int i=heights.size()-1; i>=0; i--)
        {
            if(s.size()==0)
                v.push_back(heights.size());
            else if(s.size()>0 && heights[i]>s.top().first)
                 v.push_back(s.top().second);
            else
            {
                while(s.size()>0 && s.top().first>=heights[i])
                    s.pop();
                if(s.size()==0)
                  v.push_back(heights.size());
                else
                  v.push_back(s.top().second);
            }
            s.push({heights[i],i});
        }
        reverse(v.begin(),v.end());
        return v;
    }
    
    int largestRectangleArea(vector<int>& heights) {
      
        vector<int> left = nsl(heights);
      
        vector<int> right = nsr(heights);
        
        int mx = INT_MIN;
        
        for(int i=0; i<heights.size(); i++)
        {
            mx = max(mx,heights[i]*(right[i]-left[i]-1));
        }
       
        return mx;
    }
};