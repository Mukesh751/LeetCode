class Solution {
public:
    int ans = 0;
    vector<string> words;
    
    void solve (int i, int j)
    {
        if(i>=words.size() || j>=words.size())
            return;
        
        int p = words[i].size()*words[j].size();
        map<char,int> m;
        for(char c : words[i])
            m[c]++;
        
        bool flag = true;
        for(char c : words[j])
            if(m.find(c) != m.end())
            {flag = false;break;}
        
        if(flag)
            ans = max(ans,p);
        
        solve(i,j+1);
        solve(i+1,j+1);
    }
    int maxProduct(vector<string>& words) {
    this->words = words;
    int freq[1005][28];
    memset(freq,0,sizeof(freq));
    int k = 0;
        
    for(string s : words)
    {
        sort(s.begin(),s.end());
        // cout<<s<<" ";
        for(char i = 'a'; i<='z'; i++)
        {
            int start = 0;
            int end = s.size() - 1;
            
            if(i>s[end] || i<s[start])
            {
                continue;
            }
            while(start<=end)
            {
                int mid = (start + end)/2;
                if(s[mid] == i)
                {
                    freq[k][i-'a']++;
                    // cout<<i<<" ";
                    break;
                }
                if(s[mid]>i)
                    end = mid-1;
                else
                    start = mid+1;
            }
            
        }
        k++;
        // cout<<endl;
    }
      
    // for(int i =0; i<words.size(); i++)
    // {
    //     for(int j = 0; j<27; j++)
    //         cout<<freq[i][j]<<" ";
    //     cout<<endl;
    // }
     
    
    for(int i = 0; i<words.size(); i++)
    {
        for(int j = i+1; j<words.size(); j++)
        {
            bool flag = true;
            
            for(int k = 0; k<27; k++)
                if(freq[i][k] + freq[j][k] >= 2)
                {flag = false; break;}
               
            if(flag)
            {
                int p = words[i].size()*words[j].size();
                ans = max(ans,p);
            }
        }
    }
    return ans;
    }
};