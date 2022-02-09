class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> memo;
        memo[0] = -1;
        int count = 0, maxi = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i])    count++;
            else    count--;
            if (memo.count(count))  maxi = max(maxi, i - memo[count]);
            else    memo[count] = i;
        }
        
        return maxi;
    }
};