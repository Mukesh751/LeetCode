class Solution {
public:
    int trailingZeroes(int n) {
         int answer = 0;
     while(n >= 5)
     {
         answer = answer + n/5;
         n = n/5;
         
     }
     return answer;
    }
};