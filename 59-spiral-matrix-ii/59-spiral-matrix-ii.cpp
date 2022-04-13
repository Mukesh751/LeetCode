class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int k=1;
        
        vector<vector<int>> ans (n,vector<int>(n,0));
        
        int left=0, right=n-1, top=0, bottom=n-1;
        int i,j;
        while(true)
        {
            if(k>n*n)
              break;
            
            j=top,i=left;
            for( ; i<=right; i++)
            {
                ans[j][i] = k;
                k++;
            }
            top++;
            j = top;
            i=right;
            for( ; j<=bottom; j++)
            {
                ans[j][i] = k;
                k++;
            }
            right--;
            i = right;
            j=bottom;
            for( ; i>=left; i--)
            {
                ans[j][i] = k;
                k++;
            }
            bottom--;
            j=bottom;
            i=left;
            for( ; j>=top; j--)
            {
                ans[j][i]=k;
                k++;
            }
            left++;
        }
        
        return ans;
    }
};