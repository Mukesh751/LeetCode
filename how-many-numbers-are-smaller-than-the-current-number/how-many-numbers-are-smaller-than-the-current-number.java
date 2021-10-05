class Solution {
    public int[] smallerNumbersThanCurrent(int[] nums) {
        
        	
		int x = nums.length;
		
		int ans[] = new int[x];
		for(int i=0; i<x; i++)
			{
			
			ans[i] = nums[i];
			}
		
		
		for(int i=0; i<x; i++)
		{ int count = 0;
			for(int j=0; j<x; j++)
			{
				if(ans[i]>nums[j])
				  count++;
					
			}
		  ans[i]=count;
		}
		
	
        return ans;
		
        
    }
}