class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int space = 0;
        vector<string> v;
        string temp = "";
        for(char c : s){   
            if(c==' '){
                space++;
                v.push_back(temp);
                temp = "";
            }
            else
                temp.push_back(c);
        }
        v.push_back(temp);
        if(space != pattern.size()-1)
            return false;
        
        cout<<space<<" "<<pattern.size()<<endl;
        for(string s : v)
            cout<<s<<" ";
        map<char,string> m;
        set<string> st;
        for(int i = 0; i<pattern.size(); i++)
        {
            if(m.find(pattern[i]) != m.end()){
                if(m[pattern[i]] != v[i])
                    return false;
            }
            else if(st.find(v[i]) != st.end())
                   return false;
            else{
                m[pattern[i]] = v[i];
                st.insert(v[i]);
            }
        }
        return true;
    }
};