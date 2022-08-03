class Solution {
public:
    map<pair<long long int,char>,int> m;
    long int mod = 1e9 + 7;
    
    long long int solve(int n, char prev = 'x'){
        
        if(n==0)
            return 1;
        
        if(m.find({n,prev}) != m.end())
            return m[{n,prev}];
        
        long long int tempans = 0;
        if(prev == 'x'){
        tempans += solve(n-1,'a')+solve(n-1,'e')+solve(n-1,'i')+solve(n-1,'o')+solve(n-1,'u');
        }
        
        if(prev == 'a')
            tempans += solve(n-1,'e');
        
        if(prev == 'e')
        tempans += solve(n-1,'a')+solve(n-1,'i');
        
        if(prev == 'i')
         tempans += solve(n-1,'a')+solve(n-1,'e')+solve(n-1,'o')+solve(n-1,'u');
        
        if(prev == 'o')
            tempans += solve(n-1,'i')+solve(n-1,'u');
      
        if(prev == 'u')
            tempans += solve(n-1,'a');
        
        return m[{n,prev}] = tempans%mod;
    }
    int countVowelPermutation(int n) {
        return solve(n);
    }
};