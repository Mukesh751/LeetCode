class Solution {
public:
    int minimumSum(int num) {
        vector<int> v;
        while(num>0){
            v.push_back(num%10);
            num = num/10;
        }
        
        sort(v.begin(),v.end());
        int a = v[3] + 10*v[0];
        int b = v[2] + 10*v[1];
        
        return a+b;
    }
};