class Solution {
public:
    stack<char> st;    
    bool check(char c)
    {
        if(st.top() == '(' && c == ')')
            return true;
        
        if(st.top() == '{' && c == '}')
            return true;
        
        if(st.top() == '[' && c == ']')
            return true;
        
        return false;
    }
    
    bool isValid(string s) {
        
        for(char c: s)
        {
           if(st.size()==0)
           {
               st.push(c);
               continue;
           }
            
            if(check(c))
                st.pop();
            else
                st.push(c);
        }
        if(st.size() == 0)
            return true;
        
        return false;
    }
};