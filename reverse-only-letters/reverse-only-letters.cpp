class Solution {
public:
    bool ischar(char ch)
        {
            if(ch - 'a'>=0 && ch - 'a'<26)
                return true;
            else if(ch - 'A'>=0 && ch - 'A'<26)
                return true;
            else
                return false;
        }
        
    string reverseOnlyLetters(string s) {
        int start = 0;
        int end = s.size()-1;
        while(start<=end)
        {
            if(ischar(s[start])==true && ischar(s[end])==true)
            {
                char temp = s[start];
                s[start] = s[end];
                s[end] = temp;
                
                start++;
                end--;
            }
            else if(!ischar(s[start]))
                   start++;
            else if(!ischar(s[end]))
                 end--;
        }
        return s;
        

    }
};