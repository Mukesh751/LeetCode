class Solution {
public:
    void recurse(string ip, string op, vector<string>& ans)
    {
        if(ip.size()==0)
        {
            if(op.size()!=0)
            ans.push_back(op);
            return;
        }
        else if(ip[0]=='2')
        {
            ip.erase(ip.begin()+0);
            op.push_back('a');
            recurse(ip,op,ans);
            op.erase(op.end()-1);
            op.push_back('b');
            recurse(ip,op,ans);
            op.erase(op.end()-1);
            op.push_back('c');
            recurse(ip,op,ans);  
        }
       else  if(ip[0]=='3')
        {
            ip.erase(ip.begin()+0);
            op.push_back('d');
            recurse(ip,op,ans);
            op.erase(op.end()-1);
            op.push_back('e');
            recurse(ip,op,ans);
            op.erase(op.end()-1);
            op.push_back('f');
            recurse(ip,op,ans);  
        }
       else  if(ip[0]=='4')
        {
            ip.erase(ip.begin()+0);
            op.push_back('g');
            recurse(ip,op,ans);
            op.erase(op.end()-1);
            op.push_back('h');
            recurse(ip,op,ans);
            op.erase(op.end()-1);
            op.push_back('i');
            recurse(ip,op,ans);  
        }
       else  if(ip[0]=='5')
        {
            ip.erase(ip.begin()+0);
            op.push_back('j');
            recurse(ip,op,ans);
            op.erase(op.end()-1);
            op.push_back('k');
            recurse(ip,op,ans);
            op.erase(op.end()-1);
            op.push_back('l');
            recurse(ip,op,ans);  
        }
       else  if(ip[0]=='6')
        {
            ip.erase(ip.begin()+0);
            op.push_back('m');
            recurse(ip,op,ans);
            op.erase(op.end()-1);
            op.push_back('n');
            recurse(ip,op,ans);
            op.erase(op.end()-1);
            op.push_back('o');
            recurse(ip,op,ans);  
        }
        else if(ip[0]=='7')
        {
            ip.erase(ip.begin()+0);
            op.push_back('p');
            recurse(ip,op,ans);
            op.erase(op.end()-1);
            op.push_back('q');
            recurse(ip,op,ans);
            op.erase(op.end()-1);
            op.push_back('r');
            recurse(ip,op,ans);
            op.erase(op.end()-1);
            op.push_back('s');
            recurse(ip,op,ans);
        }
       else  if(ip[0]=='8')
        {
            ip.erase(ip.begin()+0);
            op.push_back('t');
            recurse(ip,op,ans);
            op.erase(op.end()-1);
            op.push_back('u');
            recurse(ip,op,ans);
            op.erase(op.end()-1);
            op.push_back('v');
            recurse(ip,op,ans);  
        }
       else  if(ip[0]=='9')
        {
            ip.erase(ip.begin()+0);
            op.push_back('w');
            recurse(ip,op,ans);
            op.erase(op.end()-1);
            op.push_back('x');
            recurse(ip,op,ans);
            op.erase(op.end()-1);
            op.push_back('y');
            recurse(ip,op,ans);  
            op.erase(op.end()-1);
            op.push_back('z');
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