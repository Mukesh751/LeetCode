class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() == 0)
            return 0;
        
        int ans = -1;
        int pos = -1;
        
        for(int i = 0; i<haystack.size(); i++){
           if(haystack[i] == needle[0]){
               pos = i;
               int k = 0;
               while(k<needle.size() && haystack[i+k] == needle[k]){
                   k++;
               }
               
               if(k == needle.size()){
                    return pos;
               }
           }
        }
        return ans;
    }
};