class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        map<int,char> m;
        for(char x: letters)
            m[x-'a'] = x;
        int k = target - 'a';
        while(true)
        {
           k = (k+1)%26;
           if(m.find(k)!=m.end())
               return m[k];
        }
        return 'a';
    }
};