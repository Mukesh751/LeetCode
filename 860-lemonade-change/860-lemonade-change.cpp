class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int,int> m;
        for(auto x: bills){
            if(x == 5){
                m[5]++;
            }
           else if(x == 10){
                if(m[5]>0)
                    m[5]--;
                else
                    return false;
               m[10]++;
            }
            else {
                if(m[10]>0){
                    m[10]--;
                    if(m[5]>0)
                        m[5]--;
                    else
                        return false;
                }
                else if(m[5]>=3){
                    m[5]-=3;
                }
                else
                    return false;
            }
        }
        return true;
    }
};