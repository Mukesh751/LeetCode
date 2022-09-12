class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score = 0 , tok = 0;
        int mx = 0;
        if(tokens.size()==0)
            return 0;
        sort(tokens.begin(), tokens.end());
        if(tokens[0]>power)
            return mx;
        int i = 0, j = tokens.size()-1;
        while(i<=j){
            while(i<=j && tokens[i]<=power){
                tok++;
                mx = max(mx,tok);
                power-=tokens[i];
                i++;
            }
            tok--;
            power+=tokens[j];
            j--;
        }
        return mx;
    }
};