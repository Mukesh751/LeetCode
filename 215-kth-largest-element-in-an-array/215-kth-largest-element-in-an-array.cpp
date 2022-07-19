class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // sort(nums.begin(),nums.end());
        // return nums[nums.size()-k];
        map<int,int> m;
        for(auto x : nums)
            m[x]++;
        int q = nums.size() - k + 1;
        int p = 0;
        for(auto x : m){
            p = x.first;
            q-=x.second;
            if(q<=0)
                break;
        }
        return p;
    }
};