class Solution {
public:
    vector<char> v={',',' ','a','d','g','j','m','p','t','w'};
    void recurse(string ip, string op, vector<string>& ans)
    {
        if(ip.size()==0)
        {
            if(op.size()!=0)
            ans.push_back(op);
            return;
        }
      int temp=ip[0]-'0';
        ip.erase(ip.begin()+0);
        for(int i=0; i<3; i++)
        {
            op.push_back(v[temp]+i);
            recurse(ip,op,ans);
            op.pop_back();
        }
        if(temp==7 || temp==9)
        {
            op.push_back(v[temp]+3);
            recurse(ip,op,ans);
        } 
         return;
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string op="";
        recurse(digits,op,ans);
        return ans;
    }
};