class Solution {
public:
    bool judgeSquareSum(int c) {
        
        
        long long int x = sqrt(c);
        
        if(x*x == c)
            return true;
//         int start = 1;
//         int end = x;
//         while(start<end)
//         {
//             if(start*start + end*end == c)
//                 return true;
            
//             int mid = (start + end)/2;
            
//         }
        long long int k = c;
        for(long long int i = 1; i<=x; i++)
        {
            if(i*i + x*x == k)
                return true;
            else if(i*i + x*x < k)
                continue;
            else
            {x--; i--;}
        }
        return false;
    }
};