class Solution {
public:
    string generateTheString(int n) {
        
        string s="a";
        if(n%2==0)
            for(int i=1; i<n; i++)
                s.push_back('b');
        else
             for(int i=1; i<n; i++)
                s.push_back('a');
        return s;
    }
};