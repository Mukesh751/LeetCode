class Solution {
public:
    int count = 0;
    int n;
    void recurse(vector<int> s, int i)
    {
        if(s.size()==n)
        {
            
            count++;
            return;
        }
        for(int j = i; j<=5; j++)
        {
            s.push_back(j);
            recurse(s,j);
            s.erase(s.end()-1);
        }
        return;
    }
    int countVowelStrings(int n) {
        //  this->n = n;
        // vector<int> v;
        // recurse(v,1);
        // return count;
         return (n+4)*(n+3)*(n+2)*(n+1) / 24;
    }
};