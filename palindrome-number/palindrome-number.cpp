class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        string s = to_string(x);
        string y = s;
        reverse(s.begin(),s.end());
        if(y==s)
            return true;
        
        return false;
    }
};