class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int> m;
        for(int x : nums)
           m[x]++;
        
        int count = 0;
        int mx = 0;
        int prev = INT_MIN;
        
        for(auto x : m)
          cout<<x.first<<endl;
        
        for(auto x : m)
        {
            if(prev == INT_MIN)
            {prev = x.first;
             count++;
             continue;
            }
            
            if(x.first - prev == 1)
            {  
                prev = x.first;
                count++;
            }
            else
            {
                mx = max(count,mx);
                count=1;
                prev = x.first;
            }
            
        }
        mx = max(count,mx);
        return mx;
    }
};