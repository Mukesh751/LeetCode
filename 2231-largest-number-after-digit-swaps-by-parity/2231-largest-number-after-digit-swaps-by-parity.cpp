class Solution {
public:
    int largestInteger(int num) {
        priority_queue<int,vector<int>> odd;
        priority_queue<int,vector<int>> even;
        
        int temp = num;
        while(num>0){
            if((num%10)%2 == 0)
                even.push(num%10);
            else
                odd.push(num%10);
            num = num/10;
        }
        string s = to_string(temp);
        
        for(auto &x : s){
            if((x-'0')%2 == 1){
                x = odd.top() + '0';
                odd.pop();
            }
            else{
                x = even.top()+'0';
                even.pop();
            }
        }
        
        return stoi(s);
    }
};