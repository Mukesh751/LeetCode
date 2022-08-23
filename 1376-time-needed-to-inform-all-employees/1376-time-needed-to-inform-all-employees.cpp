class Solution {
public:
     int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        int ans = 0;
        for (int i = 0; i < n; ++i) 
            if (!informTime[i]) 
                ans = max(ans, dfs(manager, informTime, i));
        return ans;
    }
    int dfs(vector<int>& manager, vector<int>& informTime, int curId) {
        if (manager[curId] == -1) 
            return informTime[curId];
        informTime[curId] += dfs(manager, informTime, manager[curId]);
        manager[curId] = -1; 
        return informTime[curId];
    }
};