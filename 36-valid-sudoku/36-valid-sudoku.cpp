class Solution {
public:
    
    bool check(vector<vector<char>>& board, int i, int j)
    {
        char c = board[i][j];
        cout<<c<<"i"<<" ";
        
        for(int k = 0; k<board[i].size(); k++)
            if(board[i][k]==c && k!=j)
                return false;
        
        for(int k = 0; k<board.size(); k++)
            if(board[k][j]==c && k!=i)
                return false;
        
        int p = (i/3)*3;
        int q = (j/3)*3;
        
        for(int x = p; x<p+3; x++)
            for(int y = q; y<q+3; y++)
                if(board[x][y] == c)
                    if(x!=i || y!=j)
                        return false;

        return true;
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0; i<board.size(); i++)
        {
            for(int j=0; j<board[i].size(); j++)
            {
                if(board[i][j]=='.')
                    continue;
                else if(check(board,i,j))
                    continue;
                else
                {
                    cout<<board[i][j];
                    return false;
                }
            }
        }
        return true;
    }
};