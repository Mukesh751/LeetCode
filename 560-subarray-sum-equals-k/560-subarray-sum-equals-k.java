class Solution {
  public int subarraySum(int[] nums, int k) {
    if (nums == null || nums.length == 0) {
        return 0;
    }
    
    return subarraySum(nums, k, 0);
}

public int subarraySum(int[] nums, int k, int from) {
    if (nums.length <= from) {
        return 0;
    }
    
    int result = 0;
    
    int sum = 0;
    for (int i = from; i < nums.length; i++) {
        sum += nums[i];
        
        if (sum == k) {
            result += 1;
        }
    }
    
    return result + subarraySum(nums, k, from + 1);
}

}