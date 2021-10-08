class Solution {
public:
    bool cp(int n)
    {
     if(n==0 || n==1) 
       return false;
     for(int i=2; i<=n/2; i++)
         if(n%i == 0)
             return false;
     
    return true;
    }
    bool bits(int n)
    {
        int count=0;
        while(n>0)
        {
            if(n%2 == 1)
                count++;
            n = n/2;
        }
        return cp(count);
        
    }
    int countPrimeSetBits(int left, int right) {
        int n=0;
        for(int i=left; i<=right; i++)
            if(bits(i)==true)
                n++;
        
        return n;
    }
};