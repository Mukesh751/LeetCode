class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        int j = 0;
        string s = "";
        while(i<word1.size() && j<word2.size())
        {
            s.push_back(word1[i]);
            s.push_back(word2[j]);
            i++;
            j++;
        }
        for(;i<word1.size(); i++)
            s.push_back(word1[i]);
         for(;j<word2.size(); j++)
            s.push_back(word2[j]);
        return s;
    }
};