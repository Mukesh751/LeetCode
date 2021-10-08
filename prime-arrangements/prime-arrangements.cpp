
class Solution {
public:
    
    long long int boost_fact(int n)
    {   
        long long int m = 1e9+7;
        if(n==0)
            return 1;
        
        return (n%m*boost_fact(n-1)%m)%m;
    }
    int numPrimeArrangements(int n) {
        int p[n+1];
        p[0]=0;
        p[1]=0;
        for(int i=2; i<=n; i++)
            p[i]=1;
        int nonprime=1;
        for(int i=2; i*i<=n; i++)
            for(int j=i*i; j<=n; j+=i)
                if(p[j]==1)
                { p[j]=0;
                  nonprime++;
                }
        int prime = n - nonprime;
        int x = boost_fact(prime);
        int y = boost_fact(nonprime);
        long long int m = 1e9+7;
        
        return (int)(x%m * y%m)%m;
        
    }
};