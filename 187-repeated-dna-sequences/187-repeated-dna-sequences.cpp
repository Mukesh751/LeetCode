class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
       if(s.size() < 10)  
            return {};
        
        map<string, int> m;  
        vector<string> st;  
        for(int i = 0; i+9 < s.size(); i++){
            m[s.substr(i, 10)]++;  
        }
        for(auto i : m)
        {
            if(i.second > 1) 
            {
                st.push_back(i.first);
            }
        }
        return st;
    }
};