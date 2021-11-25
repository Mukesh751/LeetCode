class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        int arr[n+1];
        for(int i=1; i<=n; i++)
            arr[i]=0;
        
        for(int i=0; i<n; i++)
            if(nums[i]>0 && nums[i]<=n)
                arr[nums[i]]=1;
        
         for(int i=1; i<=n; i++)
            if(arr[i]==0)
                return i;
        
        if(nums.size()==1)
        {
            if(nums[0]!=1)
                return 1;
            else
                return 2;
        }
      
        return n+1;
    }
};