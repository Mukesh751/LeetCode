
class Solution {
public:
    class compare{
    public:
    
     bool operator()(pair<char,int> a, pair<char,int> b){
        return a.second<b.second;
    }
};
    int leastInterval(vector<char>& tasks, int n) {
        
       // if(n==0) return tasks.size();
        
        unordered_map<char,int> m;
        for(auto x: tasks)
            m[x]++;
        priority_queue<pair<char,int>,vector<pair<char,int>>,compare> pq;
        
        for(auto x : m){
            pq.push(x);
        }
        int days = 0;
        n++;
        while(pq.size()>0){
            vector<pair<char,int>> v;
            int i = 0;
            while(i<n && pq.size()>0){
                auto x = pq.top();
                cout<<x.first<<" "<<x.second<<" ";
                x.second--;
                if(x.second>0)
                v.push_back(x);
                pq.pop();
                days++;
                i++;
            }
            cout<<endl;
            if(v.size() == 0 && pq.size()==0)
                break;
            while(i<n){
                days++; i++;
            }
            for(auto x: v)
                pq.push(x);
        }
        return days;
    }
};