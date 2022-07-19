class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        int twosum=0;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
        int target=0-nums[i];
        int low=i+1;
        int high=n-1;

        while(low<high){
            twosum=nums[low]+nums[high];
            if(twosum>target){
                high--;
            }
            else if(twosum<target){
                low++;
            }
            else{
                vector<int>t(3,0);
                t[0]=nums[i];
                t[1]=nums[low];
                t[2]=nums[high];
                ans.push_back(t);
            
            
            while(low<high && t[1]==nums[low])
                low++;
            
            
            while(low<high && t[2]==nums[high])
                high--;
            
           }
        }
        while(i+1<n && nums[i]==nums[i+1])
            i++;
        
    }
    
        return ans;
    }
};