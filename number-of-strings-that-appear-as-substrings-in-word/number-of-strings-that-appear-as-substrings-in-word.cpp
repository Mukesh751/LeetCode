class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        
        int n=0;
        for(int i=0; i<patterns.size(); i++)
        {
            size_t f = word.find(patterns[i]);
                if(f!= string::npos)
                    n++;
        }
        return n;
    }
};