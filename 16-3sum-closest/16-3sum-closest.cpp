class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
          int n=nums.size();
        if(n < 3) return 0;
        int closest = nums[0]+nums[1]+nums[2];
        sort(nums.begin(),nums.end());
        int i;
        
        for(int i=0;i<n-2;i++)
        {
            if(i>0 && nums[i]==nums[i-1]){continue;}
            
            int j=i+1;
            int k=n-1;
            
            while(j<k)
            {
                int currsum=nums[i]+nums[j]+nums[k];
                
                if(currsum==target){return currsum;}
                
                if(abs(target-currsum) <abs(target-closest))
                {
                    closest=currsum;
                }
                
                if(currsum>target)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
        
        }
        
        
        return closest;
    }
};