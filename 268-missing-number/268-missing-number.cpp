class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        int temp = 0;
        sum = n * (n+1);
        sum/=2;
        for(int x : nums)
            temp += x;
        
        return sum - temp;
    }
};