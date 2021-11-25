class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        int map[k+1];
        for(int i=0; i<k+1; i++) 
            map[i]=0;
        
        for(int i=0; i<arr.size(); i++)
        {arr[i]=(arr[i]%k+k)%k;
          if(map[arr[i]]==0)
                 map[arr[i]]=1;
              else 
                 map[arr[i]]+=1;
        }
       

        
        for(int i=0; i<=k/2; i++)
        { if(map[i]!=map[k-i] && i!=0)
                return false;
            if(i==0)
                if(map[0]%2!=0)
                   return false;
        }
        
        return true;
    }
};