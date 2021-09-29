class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int max=nums[0], secmax=nums[1], min=nums[0], secmin=nums[1];
        if(max<secmax)
        {int temp=max;
            max=secmax;
            secmax=temp;}
        if(secmin<min)
        {
            int temp=secmin;
            secmin=min;
            min=temp;
         }
        for(int i=2; i<nums.size(); i++)
        {
            if(nums[i]>max)
            {secmax=max;
             max=nums[i];  
            }
            else if(nums[i]>secmax)
                secmax=nums[i];
            
            if(nums[i]<min)
            {
                secmin=min;
                min=nums[i];
            }
            else if(nums[i]<secmin)
                secmin=nums[i];
        }
        int maxpro = max*secmax - min*secmin;
        return maxpro;
    }
};