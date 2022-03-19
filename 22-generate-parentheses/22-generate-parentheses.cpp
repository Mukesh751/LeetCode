class Solution {
public:
    void recurse(int o, int c, vector<string>& ans, string op)
    {
        if(o==0 && c==0)
        {
            ans.push_back(op);
            return;
        }
        if(o==c)
        {
            op.push_back('(');
            o--;
        }
        
            if(o!=0)
            { string temp=op;
                 temp.push_back('(');
            int tempo=o;
             tempo--;
            recurse(tempo,c,ans,temp);
            }
            if(c!=0)
            {
                  op.push_back(')');
            c--;
            recurse(o,c,ans,op);
            }
        
        return;
    }
    vector<string> generateParenthesis(int n) {
        
        vector<string> ans;
        recurse(n,n,ans,"");
        return ans;
    }
};