class Solution {
public:
    int getMaxLen(vector<int>& nums) {
         int n = nums.size();
        
        int positiveLen = nums[0] > 0 ? 1 : 0;
        int negativeLen = nums[0] < 0 ? 1 : 0;
        int maxPositiveLen = INT_MIN;
        
        maxPositiveLen = max(maxPositiveLen, positiveLen);
        
        for (int i = 1; i < n; i++) {
            
            if (nums[i] < 0) {
                int temp = negativeLen > 0 ? negativeLen + 1 : 0;
                negativeLen = positiveLen + 1;
                positiveLen = temp;
            } else if (nums[i] > 0) {
                negativeLen = negativeLen > 0 ? negativeLen + 1 : 0;
                positiveLen = positiveLen + 1;
            } else {
                positiveLen = 0;
                negativeLen = 0;
            }
            maxPositiveLen = max(maxPositiveLen, positiveLen);
        }
        
        return maxPositiveLen;
    }
};