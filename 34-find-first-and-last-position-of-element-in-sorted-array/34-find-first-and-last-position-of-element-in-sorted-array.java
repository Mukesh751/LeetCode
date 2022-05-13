class Solution {
    public int[] searchRange(int[] nums, int target) {
         int upperbound=first_last(nums,target,+1);
        int lowerbound=first_last(nums,target,-1);
       int[] arr=new int[2];
        arr[0]=lowerbound;
        arr[1]=upperbound;
        return arr;
        
    }
    
      private static int first_last(int[] nums, int tgt,int tog) {

        int lo=0;
        int hi=nums.length-1;
        int ans=-1;
        while (lo<=hi){
            int mid=(lo + hi)/2;
            if (nums[mid]<tgt){
                lo=mid+1;
            }else if (nums[mid]>tgt){
                hi=mid-1;
            }else {
                ans=mid;
                if (tog==-1){
                    hi=mid+tog;
                }else {
                    lo=mid+tog;
                }
            }
        }
        return ans;
    }
}