//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> reverseSpiral(int R, int C, vector<vector<int>>&matrix)  {
        // code here
            int rows = matrix.size();
    int cols = matrix[0].size();
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = rows - 1;
    int endingCol = cols - 1;
    
    int count = 0;
    int total = rows*cols;
    vector<int> ans;
    while(count < total)
    {
        for(int index = startingCol; index <=endingCol and count<total ;index++)
        {
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++; 
         for(int index = startingRow; index <=endingRow and count<total ;index++)
        {
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--; 
         for(int index = endingCol; index >= startingCol and count<total ;index--)
        {
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;
          for(int index = endingRow; index >= startingRow and count<total ;index--)
        {
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;  
              
    }
    reverse(ans.begin(),ans.end());
    return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends