class Solution {
public:
   
    int nthUglyNumber(int n){
        vector<unsigned long long int> v;
        set<unsigned long long int> s;
        v.push_back(1);
        s.insert(1);
        long long int i = 0;
        while(v.size() <min(n*4,n*3 + 500)){
           unsigned long long int k = v[i];
            if(s.find(2*k) == s.end())
            {
                v.push_back(2*k);
                s.insert(2*k);
            }
             if(s.find(3*k) == s.end())
            {
                v.push_back(3*k);
                s.insert(3*k);
            }
             if(s.find(5*k) == s.end())
            {
                v.push_back(5*k);
                s.insert(5*k);
            }
            i++;
        }
        for(int x : v)
          cout<<x<<" ";
        sort(v.begin(),v.end());
        // for(int x : v)
        //     cout<<x<<" ";
        return v[n-1];
    }
};