class Solution {
public:
    
    int numberOfSteps(int num) {
       if(num == 0)
           return 0;
        int ans = 0;
        if(num&1)
            ans = 1 + numberOfSteps(num-1);
        else
            ans = 1 + numberOfSteps(num>>1);
        
        return ans;
    }
};