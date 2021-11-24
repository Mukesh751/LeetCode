class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
             map<int,int> mp;
        
        for(int i=0; i<arr.size(); i++){
            mp[(arr[i]%k + k)%k]++;
        }
        
       
        for(int i=0;i<k;i++){
            
            if(mp[i]!=mp[k-i] and i!=0) return false;
            if(i==0){
                if(mp[i]%2!=0) return false;
            }
        }
        
        
        return true;}
};