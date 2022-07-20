class Solution {
public:
    void dfs(int i,set<int>& uset,vector<int> graph[]){
        for(auto x:graph[i]){
            if(uset.find(x)!=uset.end()){
                uset.erase(uset.find(x));
                dfs(x,uset,graph);
            }
        }
    }
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> graph[n];
        for(auto  x:edges) 
            graph[x[0]].push_back(x[1]);
        set<int> uset;
        for(int i=0;i<n;i++) 
            uset.insert(i);
        for(int i=0;i<n;i++){
            if(uset.find(i)!=uset.end())dfs(i,uset,graph);
        }
        vector<int> ans;
        for(auto i:uset) ans.push_back(i);
        return ans;
    }
};