class Solution {
vector<vector<int>>mem;
    int solve(string &word1,string &word2,int i,int j){
    
        if(i>=word1.size() and j>=word2.size()){
            return 0;
        } else if(i>=word1.size()){
            return word2.size()-j;
        } else if(j>=word2.size()){
            return word1.size()-i;
        } else if(mem[i][j]!=-1){
            return mem[i][j];
        } else {
            if(word1[i]==word2[j]){
                return mem[i][j]=solve(word1,word2,i+1,j+1);
            } else {
                int insert=solve(word1,word2,i,j+1);
                int replace=solve(word1,word2,i+1,j+1);
                int del=solve(word1,word2,i+1,j);
                return mem[i][j]=1+min(insert,min(del,replace));
            }
        }
    }
public:
    int minDistance(string &word1, string &word2) {
        mem=vector<vector<int>>(word1.size(),vector<int>(word2.size(),-1));
        return solve(word1,word2,0,0);
    }
};