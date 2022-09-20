class Solution {
public:
    int findLength(vector<int>& X, vector<int>& Y) {
int maxLen=0;
        int LCSuff[1005][1005];
        int Endindex;
 for (int i = 0; i <= X.size(); i++) {
        for (int j = 0; j <= Y.size(); j++) {
            if (i == 0 || j == 0)
                LCSuff[i][j] = 0;
 
            else if (X[i - 1] == Y[j - 1]) {
                LCSuff[i][j] = LCSuff[i - 1][j - 1] + 1;
                if (maxLen < LCSuff[i][j]) {
                    maxLen = LCSuff[i][j];
                    Endindex=i;
                }
            }
            else
                LCSuff[i][j] = 0;
        }
    }
	return maxLen;
    }
};