class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num==1)
            return false;
        long long int x = 1;
        for(int i=2; i<=num/2; i++)
            if(num%i == 0)
                x+=i;
        
     if(x==num)
         return true;
    else
        return false;
    }
};