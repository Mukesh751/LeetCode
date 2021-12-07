class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int n=0;
        set<char> s;
        for(int i=0; i<jewels.size(); i++)
            s.insert(jewels[i]);
        
        for(int i=0; i<stones.size(); i++)
            if(s.count(stones[i])!=0)
                n++;
        
        return n;
    }
};