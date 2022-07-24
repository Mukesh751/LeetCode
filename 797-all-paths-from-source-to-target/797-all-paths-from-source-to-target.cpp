class Solution {
public:
    vector<vector<int>> graph;
    vector<vector<int>> ans;
    //bool flag = false;
    
    void solve(int i,vector<int> temp){
        if(i == graph.size()-1)
            ans.push_back(temp);
        
        // if(flag == false && graph[i].size() == 0)
        //     ans.push_back(temp);
        
        if(i>=graph.size())
            return;
        
        for(int j = 0; j<graph[i].size(); j++){
            temp.push_back(graph[i][j]);
            solve(graph[i][j],temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
    this->graph = graph;
    // if(graph[graph.size()-1].size() == 0)
    //     flag = true;
        
    vector<int> temp;    
    temp.push_back(0);
    solve(0,temp);
    return ans;
    }
};