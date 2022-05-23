class Solution {
public:
    int divide(long long int dividend,long long int divisor) {
      
        if(divisor == -1 && dividend == -2147483648)
          return (dividend-1);
        
        
        
        int neg1 = 1, neg2 = 1;
        if(divisor<0)
        {    neg1 *= (-1);
         divisor *= neg1;
        }
        if(dividend<0)
        {     neg2 *= (-1);
        dividend*=neg2;
        }
        
      
        
        
        if(divisor == 1)
          return dividend*neg1*neg2;
        
        long long int count = 0;
        while(dividend-divisor>=0 )
        {   
            count++;
            dividend-=divisor;    
        }
        cout<<count<<" "<<neg1<<" "<<neg2;
        
        return count*neg1*neg2;
    }
};