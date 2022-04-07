class Solution {
public:
    
    int lastStoneWeight(vector<int>& stones) {
        
        while(stones.size()>1)
        {
            if(stones.size()==2)
                return abs(stones[1]-stones[0]);
        sort(stones.begin(),stones.end());
        int n = stones.size();
        int d = stones[n-1]-stones[n-2];
        stones.erase(stones.end()-2,stones.end());
        if(d>0)
            stones.push_back(d);
        }
        return stones[0];
    }
};