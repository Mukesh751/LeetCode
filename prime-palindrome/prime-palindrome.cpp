class Solution {
public:
  bool ispal(int n){
        string s=to_string(n);
        int low=0,high=s.length()-1;
        while(low<high){
            if(s[low]!=s[high]){
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
    
    bool isPrime(int n) {   
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
    
    int primePalindrome(int n) {
        for(int i=n;i<10000000;i++){
            if(isPrime(i) && ispal(i)){
                return i;
            }
        }
        return 100030001;
    }
};