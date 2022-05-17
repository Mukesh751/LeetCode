class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        set<int> s;
        for(int x : arr)
        {
            if((s.find(x/2)!=s.end() && x%2==0) || s.find(x*2) != s.end())
                return true;
            else
                s.insert(x);
        }
        return false;
    }
};