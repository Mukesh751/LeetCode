class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
    sort(nums.begin(), nums.end());
   int mx = INT_MIN;
    for(int i = nums.size()-1; i>=2; i--)
    { 
         int a = nums[i];
         int b = nums[i-1];
         int c = nums[i-2];
        if(a+b>c && b+c>a && c+a>b)
         mx = max(mx, a+b+c);
    }    
    return max(0,mx);
    }
};