class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& a, vector<vector<int>>& b) {
         vector<vector<int>> ans;
        int i = 0;
        int j = 0;
        while(i<a.size() && j<b.size()){
            int first = max(a[i][0], b[j][0]);
            int second = min(a[i][1], b[j][1]);
            if(first<=second) 
                ans.push_back({first, second});
            if(a[i][1]>b[j][1]) j++;
            else if(a[i][1]<b[j][1]) i++;
            else{ // if(a[i][1]==b[j][1])
                i++;
                j++;
            }
        }
        return ans;
    }
};