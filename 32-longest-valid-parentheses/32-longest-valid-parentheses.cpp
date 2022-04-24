class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int n=s.length();
        int maxl = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '('){
                st.push(i);
            }
            else{
                st.pop();
                if(!(st.empty()))
                    maxl = max(maxl, i - st.top());
                else st.push(i);
            }
        }
        return maxl;
    }
};