class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> range={};
        if(nums.size()==1 && nums[0]==target)
        { range.push_back(0);
         range.push_back(0);
            return range;}
        
        
            int l=-1;
            int r=-1;
            int i=0;
            while(i<nums.size() && nums[i]<=target)
            {
                if(nums[i]==target)
                {  l=i; break;}
                i++;
            }
            if(l>-1)
            {   i=0;
                 while(i<nums.size())
            {
                if(nums[nums.size()-1-i]==target)
                {  r=nums.size()-1-i; break;}
                     i++;
            }
            }
            range.push_back(l);
         range.push_back(r);
            return range;
        }
      
};