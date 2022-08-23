class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int> s;
        for(int i = 0; i<a.size(); i++){
            
            if(s.size()==0 || s.top()<=0 && a[i]>0){
                s.push(a[i]);
                continue;
            }
            int y = s.top();
            if(a[i] + y == 0){
                s.pop();
                continue;
            }
            if(a[i]<0 && y<0 || a[i]>0 && y>0){
                s.push(a[i]);
                cout<<1;
                continue;
            }
            
            if(abs(a[i]) < abs(y))
                continue;
            
            if(y>0){
                while(s.size()>0 && a[i]<0 && s.top()>=0 && abs(a[i])>abs(s.top()))
                    s.pop();
            }
            else{
                 while(s.size()>0 && a[i]>=0 && s.top()<0 && abs(a[i])>abs(s.top()))
                    s.pop();
            }
            if(s.size() == 0){
                s.push(a[i]);
                continue;
            }
             y = s.top();
            if(a[i] + y == 0){
                s.pop();
                continue;
            }
            if(a[i]<0 && y<0 || a[i]>0 && y>0){
                s.push(a[i]);
                continue;
            }
            if(abs(a[i]) < abs(y))
                continue;
            
        }
        vector<int> ans;
        while(s.size()>0){
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};