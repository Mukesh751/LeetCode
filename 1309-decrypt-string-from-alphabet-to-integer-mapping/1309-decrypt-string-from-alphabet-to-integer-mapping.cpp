class Solution {
public:
    string freqAlphabets(string s) {
        string ans="";
        for(int i = 0; i<s.size(); i++)
        {
            char c;
            if(i+2<s.size())
            { if(s[i+2] == '#')
            {
                string temp = "";
                temp.push_back(s[i]);
                temp.push_back(s[i+1]);
                c = 'a' + stoi(temp) - 1;
                ans.push_back(c);
                i+=2;
                continue;
            }
            }
            c = 'a' + (s[i] - '0') - 1;
            ans.push_back(c);
        }
        return ans;
    }
};