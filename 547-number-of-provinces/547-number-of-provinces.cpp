class Solution {
public:
    
    void dfs(vector<vector<int>> v, int i, vector<bool>& vis){
        vis[i] = true;
        for(int j = 0; j<v.size(); j++){
            if(v[i][j] && vis[j] == false)
             dfs(v,j,vis);
        }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<bool> vis(isConnected.size(), false);
        int count = 0;
        for(int i = 0; i<vis.size(); i++){
          if(!vis[i]) { 
              dfs(isConnected, i, vis);
              count++;
          }
        }
        return count;
    }
};