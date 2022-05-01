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
    
    int mha(vector<int>& heights) {
      
        vector<int> left = nsl(heights);
      
        vector<int> right = nsr(heights);
        
        int mx = INT_MIN;
        
        for(int i=0; i<heights.size(); i++)
        {
            mx = max(mx,heights[i]*(right[i]-left[i]-1));
        }
       
        return mx;
    }
    
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        
        vector<int> v(matrix[0].size(),0);
        int mx = INT_MIN;
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[0].size(); j++)
        {
            int k = matrix[i][j] - '0';
            if(k==0)
              v[j]=0;
            if(k==1)
                v[j]+=k;
           
        }
            for(int x: v)
                cout<<x<<" ";
            cout<<endl;
         mx = max(mx,mha(v));
    }
        return mx;
    }
};