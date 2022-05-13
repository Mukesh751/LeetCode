class Solution {
public:
    
    int kadane(vector<int> a)
    {
         int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < a.size(); i++)
    {
        max_ending_here = max_ending_here + a[i];
        
        if (max_so_far < max_ending_here)
          max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
        
    return max_so_far;
    }
    
    int maxSubarraySumCircular(vector<int>& a) {
                  
    int ib = kadane(a);
    int total_sum = accumulate(a.begin(),a.end(),0);
    for(int i=0; i<a.size(); i++)
        a[i] = a[i]*(-1);
    int ib_n = kadane(a);
    if(total_sum == (-1)*ib_n)
        return ib;
    return max(ib, total_sum + ib_n);
    }
};