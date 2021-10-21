class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> range={};
        if(nums.size()==1 && nums[0]==target)
        { range.push_back(0);
         range.push_back(0);
            return range;}
        if(nums.size()<=1000)
        {
            int l=-1;
            int r=-1;
            int i=0;
            while(i<nums.size())
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
        int mid = nums.size()/2;
        int pos = 0;
        int count=0;
        while(mid>0 && count<nums.size()/2)
        {
            count++;
            if(nums[mid]==target)
            {
                pos=mid;
                break;
            }
            else if(nums[mid]<target)
            {
                mid = (mid + nums.size())/2;
            }
            else if(nums[mid]>target)
            {
                mid=mid/2; 
            }
        }
        
        if(mid<=0 || count>nums.size()/2)
        {
            range.push_back(-1);
            range.push_back(-1);
        }
        else
        {
            int posl=pos;
            int posr=pos;
            int i=1;
            while(nums[pos-i]==target || nums[pos+i]==target)
            {
                if(nums[pos-i]==target)
                    posl=pos-i;
                if(nums[pos+i]==target)
                    posr=pos+i;
            
                i++;
            }
            range.push_back(posl);
            range.push_back(posr);
        }
         return range;
    }
};