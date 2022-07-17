class Solution {
public:
    vector<int> a;
    double find(int n)
    {
       if (n % 2 != 0)
        return (double)a[n / 2];
 
    return (double)(a[(n - 1) / 2] + a[n / 2]) / 2.0;
   }
    
    vector<int> rearrangeArray(vector<int>& nums) {
        a = nums;
        sort(a.begin(),a.end());
        
        double x = find(nums.size());
        
        int i = 1;
        int j = 0;
        int k = 0;
        while(k<nums.size()){
            if((double)nums[k] < x)
            {a[i] = nums[k];
                i+=2;}
            else
            {a[j] = nums[k];
             j+=2;}
            k++;
        }
        return a;
    }
};