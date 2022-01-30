class Solution {
public:
    void rotate(vector<int>& r, int k) {
        
            k%=r.size();
        
        int d=r.size()-k;
     reverse(r.begin(), r.begin()+d);
    reverse(r.begin()+d, r.end());
    reverse(r.begin(), r.end());
        
    }
};