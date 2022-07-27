class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string p = "";
        string temp = s[0];
        bool flag = true;
        int k = 0;
        while(k<temp.size() && flag){
        for(int i = 1; i<s.size(); i++ ){
            if(k>=s[i].size()){
                flag = false;
                break;
            }
            if(temp[k] != s[i][k]){
                flag = false;
                break;
            }
        }
            if(flag)
                p.push_back(temp[k]);
            
            k++;
        }
        return p;
    }
};