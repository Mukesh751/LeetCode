class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z = 0, o = 0, t = 0;
        for(int x : nums)
        {
            if(x == 0)
                z++;
             if(x==1)
                 o++;
            if(x==2)
                t++;
        }
        nums.clear();
        
        while(z--)
            nums.push_back(0);
         while(o--)
             nums.push_back(1);
        while(t--)
            nums.push_back(2);
    }
};