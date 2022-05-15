class Solution {
public:
    
    void solve(vector<vector<int>>& image, int i, int j, int c)
    {
        int k = image[i][j];
        image[i][j] = c;
        
        if(i+1<image.size() && image[i+1][j] == k)
            solve(image,i+1,j,c);
        
        if(j+1<image[0].size() && image[i][j+1] == k)
            solve(image,i,j+1,c);
        
        if(i-1>=0 && image[i-1][j] == k)
            solve(image,i-1,j,c);
        
        if(j-1>=0 && image[i][j-1] == k)
            solve(image,i,j-1,c);
        
        return;
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        cout<<image.size()<<" "<<image[0].size();
        
        if(image[sr][sc] == newColor)
            return image;
        
        solve(image,sr,sc,newColor);
        return image;
    }
};