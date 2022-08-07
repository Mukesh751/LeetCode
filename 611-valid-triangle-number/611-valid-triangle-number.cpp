class Solution {
public:
    int triangleNumber(vector<int>& nums) {
         int n = nums.size();

        if(n==1 || n==2) 
            return 0;
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<n-2;i++){
           for(int j=i+2;j<n;j++){
              
               int x = nums[j]-nums[i];
               int k=0;
               int s = i+1, e=j-1;
               while(s<=e){
                   int m = (s+e)/2;
                   if(nums[m]>x){
                      k = (j-m);
                       e=m-1;
                   }else{
                       s=m+1;
                   }
               }
               ans+=k;
           } 
        }
        return ans;
    }
};