class Solution {
public:
    int trap(vector<int>& height) {
       int n=height.size();
        int left[n];
        left[0]=height[0];
        int right[n];
        right[n-1]=height[n-1];
        
        for(int x=1; x<height.size(); x++)
         left[x]=max(left[x-1],height[x]);
        
        for(int x=height.size()-2; x>=0; x--)
          right[x]=max(right[x+1],height[x]);
        
        int ans=0;
        for(int i=0; i<n; i++)
            ans+=min(left[i],right[i])-height[i];
        
        return ans;
    }
};