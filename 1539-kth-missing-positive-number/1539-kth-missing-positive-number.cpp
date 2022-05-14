class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
    vector<int> v(1005,0);
        
        int i;
        
        for( i=0; i<arr.size(); i++)
            v[arr[i]]++;
        
        for( i=1; i<v.size(); i++)
        {
            if(v[i]==0)
            {
                k--;
                if(k==0)
                    return i;
            }
        }
        k--;
        while(k--)
          i++;
          
        return i;
    }
};