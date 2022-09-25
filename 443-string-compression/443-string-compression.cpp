class Solution {
public:
    int compress(vector<char>& chars) {
        
        vector<char> ans;
        int count = 0;
        char last = chars[0];
        for(auto x: chars){
            if(x == last)
            {count++; continue;}
            stack<char> stk;
            ans.push_back(last);
            last = x;
            if(count == 1)
                continue;
            
            int k = count;
            while(k>0){
                stk.push(k%10 + '0');
                k = k/10;
            }
            while(stk.size()>0){
                ans.push_back(stk.top());
                stk.pop();
            }
            count = 1;
        }
            stack<char> stk;
            ans.push_back(last);
            if(count != 1){            
            int k = count;
            while(k>0){
                stk.push(k%10 + '0');
                k = k/10;
            }
            while(stk.size()>0){
                ans.push_back(stk.top());
                stk.pop();
            }
            }
        chars.clear();
        chars = ans;
       
        return chars.size();
    }
};