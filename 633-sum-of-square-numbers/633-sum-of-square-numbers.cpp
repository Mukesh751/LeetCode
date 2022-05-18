class Solution {
public:
    bool judgeSquareSum(int c) {
        
        
        long long int x = sqrt(c);
        
        if(x*x == c)
            return true;

        long long int k = c;
        // for(long long int i = 1; i<=x; i++)
        // {
        //     if(i*i + x*x == k)
        //         return true;
        //     else if(i*i + x*x < k)
        //         continue;
        //     else
        //     {x--; i--;}
        // }
        long long int low = 1;
        long long int high = x;
         while(low<=high){
           long sum = (low*low)+(high*high);
            if(sum==k){
                return true;
            }
            if(sum>k){
                high--;
            }
            else{
                low++;
            }
        }
        
        return false;
    }
};