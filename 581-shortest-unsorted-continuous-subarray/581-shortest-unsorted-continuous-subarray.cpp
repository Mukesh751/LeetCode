class Solution {
public:
    

    
    int findUnsortedSubarray(vector<int>& nums) {
        
          vector<int> v(nums.begin(),nums.end());
        sort(v.begin(),v.end());
        int start=-1;
        int end=-1;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==v[i])
                continue;
            
            if(start==-1)
                start=i;
            else
                end=i;
        }
        cout<<start<<" "<<end;
        if(start==-1 && end==-1)
            return 0;
        
        return end-start+1;
    }
};