class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int curr=0;
        int ans=INT_MAX;
        queue<int> q;
        for(int i=0;i<nums.size();i++){
            if(curr<target){
                curr+=nums[i];
                q.push(nums[i]);
            }
            while(curr>=target){
                int a=q.size();
                ans=min(ans,a);
                curr-=q.front();
                q.pop();
            }
        }
        if(ans==INT_MAX)return 0;
        return ans;
    }
};