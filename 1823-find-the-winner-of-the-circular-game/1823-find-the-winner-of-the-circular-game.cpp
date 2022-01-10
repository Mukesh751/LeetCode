class Solution {
public:
    
    void recurse(vector<int>& x, int k, int index)
    {
        if(x.size()==1)
            return;
        
        index=(k+index)%x.size();
        cout<<x[index]<<" ";
        x.erase(x.begin()+index);
        
        recurse(x,k,index);
    }
    
    int findTheWinner(int n, int k) {
        vector<int> x;
        for(int i=1; i<=n; i++)
            x.push_back(i);
        
        recurse(x,k-1,0);
        
        return x[0];
    }
};