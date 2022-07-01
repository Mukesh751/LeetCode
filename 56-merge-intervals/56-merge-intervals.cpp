class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& que) {
       int n=que.size();
vector<vector<int>>ans;
sort(que.begin(),que.end());

    ans.push_back({que[0][0],que[0][1]});
    for(int i=1;i<n;i++)
    {
        int s1=ans.back()[0];
        int e1=ans.back()[1];
        int s2=que[i][0];
        int e2=que[i][1];
        if(s2>e1)
        {
            ans.push_back({que[i][0],que[i][1]});
        }
        else
        {
            e1=max(e1,e2);
            ans.pop_back();
            ans.push_back({s1,e1});
        }
    }
    return ans;
    }
};