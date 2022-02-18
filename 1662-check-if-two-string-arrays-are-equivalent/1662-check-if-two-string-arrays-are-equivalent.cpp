class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s="",str="";
        for(auto x: word1)
            s+=x;
        for(auto x: word2)
            str+=x;
        if(s==str)
            return true;
      return false;
    }
};