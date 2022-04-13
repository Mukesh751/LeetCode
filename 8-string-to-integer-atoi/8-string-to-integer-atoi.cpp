class Solution {
public:
    int myAtoi(string s) {
        long long int res = 0;
        int i = 0;
        bool flag = false;

        while (s[i] == ' ')
            i++;
        
        if(s[i] == '-') {
            flag = true;
            i++;
            }
            
        else if(s[i] == '+') 
            i++;


        while (s[i]>='0' && s[i]<='9')
        {
            res = res*10+s[i]-'0';
            if(res >= INT_MAX && !flag)
              {
                res = INT_MAX; 
               break;
              }
            else if(res > INT_MAX && flag)
            {
                res = INT_MIN; 
                break;
            }
            i++;
        }
        return flag ? res*(-1):res;
    }
};