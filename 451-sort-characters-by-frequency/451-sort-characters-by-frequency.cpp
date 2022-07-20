class Solution {
public:
    string frequencySort(string str) {
        int s=str.length(),i;
        unordered_map <char,int> m;
        vector <pair <int,char>> v;
        for(i=0;i<s;i++)
        {
            m[str[i]]++;
        }
        for(auto it:m)
        {
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end());
        int vs=v.size();
        str="";
        for(i=vs-1;i>=0;i--)
        {
            while(v[i].first!=0)
            {
                //str+=v[i].second;
                str.push_back(v[i].second);
                v[i].first--;
            }
        }
        return str;
    }
};