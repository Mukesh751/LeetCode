class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
          vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        vector<int> temp;
        temp.push_back(intervals[0][0]);
        int prev = intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            
            if(prev >= intervals[i][0]){
                prev = max(intervals[i][1], prev);
            }
            else{
                temp.push_back(prev);
                ans.push_back(temp);
                temp.clear();
                temp.push_back(intervals[i][0]);
                prev = intervals[i][1];
            }
            
        }
        temp.push_back(prev);
        ans.push_back(temp);
        return ans;
    }
};