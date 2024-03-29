class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int space) {
    unordered_map<int,long long> mp;
    
        long long days=0;
        for(int i=0;i<tasks.size();i++)
        {
            days++;
            int curr=tasks[i];
            if(mp.find(curr)!=mp.end())
            {
                long long last=mp[curr];
                if(days-last<=space)
                    days=last+space+1;
            }
            mp[curr]=days;
        }
        return days;
    }
};