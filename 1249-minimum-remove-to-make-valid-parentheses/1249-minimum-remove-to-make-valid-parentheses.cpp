class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<char>st;
        int open=0;
        string ans="";
        for(auto it:s){
            if(it!=')'){
                if(it=='(')open++;
                st.push(it);
            }
            else if(open>0){
                st.push(it);open--;
            }
        }
        while(st.size()){
            if(st.top()=='(' && open>0)open--;
            else ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};