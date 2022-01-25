class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max=0;
        for(int i=0; i<candies.size(); i++)
        { if(candies[i]>max)
            max=candies[i];
            
          candies[i]+=extraCandies;
        }
        vector<bool> x;
        for(int i=0; i<candies.size(); i++)
            if(candies[i]<max)
                x.push_back(false);
            else
                x.push_back(true);
        
        return x;
    }
};