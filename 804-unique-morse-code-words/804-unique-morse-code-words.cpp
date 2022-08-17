class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> v = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        unordered_set<string> s;
        
        for(auto x : words){
            string temp = "";
            for(auto y : x){
                temp+=v[y-'a'];
            }
            s.insert(temp);
        }
        return s.size();
    }
};