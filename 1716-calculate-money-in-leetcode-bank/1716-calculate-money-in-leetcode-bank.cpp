class Solution {
public:
    int totalMoney(int n) {
        int i = 1;
        int sum = 0;
        int mon = 1;
        int k = mon;
        
        while(n>=7){
                int end = mon + 6;
                int temp = 7*(end+mon);
                temp/=2;
                sum+=temp;
                n-=7;
                mon++;
        }
        if(n){
                int end = mon + n - 1;
                int temp = n*(end+mon);
                temp/=2;
                sum+=temp;
                n-=7; 
        }
        return sum;
    }
};