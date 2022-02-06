class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int k=0;
        if(ruleKey=="color")
            k=1;
        if(ruleKey=="name")
            k=2;
        
        int count=0;
        
        for(int i=0; i<items.size(); i++)
        {
            
             if(items[i][k]==ruleValue)
                    count++;
            
        }
        return count;
    }
};