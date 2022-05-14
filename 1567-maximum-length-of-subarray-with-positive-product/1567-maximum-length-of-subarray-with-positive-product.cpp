class Solution {
public:
    int getLen(vector<int>& v){
        int negNo = 0; // count of negative numbers
        int f=-1; // first negative number index
        int s=-1; // last negative number index
        
        for(int i=0;i<v.size();i++){
            if(v[i]<0){
                negNo++;
                if(f==-1)
                    f = i;
                s = i;
            }
        }
        int n = v.size();
        return negNo%2==0?n:max(0,max(n-f-1, s));
    }
    int getMaxLen(vector<int>& nums) {
        
    
        vector<vector<int>> p;
        vector<int> temp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                p.push_back(temp);
                temp.clear();
            }else
                temp.push_back(nums[i]);
        }
        
    
        p.push_back(temp);
        
        int ans=0;
        for(int i=0;i<p.size();i++){
            ans = max(ans, getLen(p[i]));
        }
        return ans;
    }
};