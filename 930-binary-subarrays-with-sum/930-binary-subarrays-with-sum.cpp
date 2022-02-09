class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
          map<int,int>mp;
        mp[0]=1 ;
        int sum = 0 ;
        int count = 0 ;
        
        for(auto&k:nums)
        {
            sum+=k ;
            
            if(mp[sum-goal])
                count+=mp[sum-goal] ;
            mp[sum]++ ;
            
        }
        return count ;
    }
};