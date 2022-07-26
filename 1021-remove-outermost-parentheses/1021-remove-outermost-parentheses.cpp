class Solution {
public:
    string removeOuterParentheses(string s) {
         string str;
        stack<char> st;
        for(char c: s){
            if(c == '('){
                if(!st.empty()){
                    str += '(';
                }
                st.push(c);
            }
            else {
                st.pop();
                if(!st.empty()){
                    str += ")";
                }
            }
            
        }
        return str;
    }
};