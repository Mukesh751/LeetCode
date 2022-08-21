class Solution {
public:
    vector<int> nsl(vector<int> arr){
    int n=arr.size();
    stack<pair<int,int>>st;
    vector<int>leftSmall(n);

    for(int i=0;i<n;i++){

        while(!st.empty() && st.top().first>=arr[i]){
            st.pop();
        }
        if(st.empty()){
            leftSmall[i]=-1;
        }
        else{
            leftSmall[i]=st.top().second;
        }
        st.push({arr[i],i});
    }
    return leftSmall;
    }
    void debug(vector<int> v){
        for(auto x : v)
            cout<<x<<" ";
        
        cout<<endl;
    }
    int nextGreaterElement(int n) {
       vector<int> v;
       int temp = n;
        while(temp>0){
            v.push_back(temp%10);
            temp/=10;
        }
        reverse(v.begin(),v.end());
//         vector<int> a = nsl(v);
//         debug(a);
        
//         bool flag = false;
//         for(int i = a.size()-1; i>=0; i--){
//             if(a[i] != -1){
//                 swap(v[i],v[a[i]]);
//                 flag = true;
//                 break;
//             }
//         }
//         debug(v);
        if(next_permutation(v.begin(),v.end())){
            temp = 0;
        }
        else
            return -1;
        
        long long k = 0;
        for(int i = 0; i<v.size(); i++)
            k = k*10 + v[i];
        
        if(k>INT_MAX )
            return -1;
        return k;
    }
};