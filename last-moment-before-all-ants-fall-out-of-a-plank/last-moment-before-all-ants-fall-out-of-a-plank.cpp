class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        sort(left.begin(),left.end());
        sort(right.begin(),right.end());
        
        int maxr,maxl;
        if(left.size()==0)
           maxr=0;
        else 
            maxr=left[left.size()-1];
        if(right.size()==0)
            maxl=0;
        else
        {maxl=right[0];
        maxl=n-maxl;}
        if(maxr>maxl)
            return maxr;
        
        return maxl;
    }
};