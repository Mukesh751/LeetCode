class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> v;
        for(int i=0; i<ops.size(); i++)
        { 
            int n = v.size();
            if(ops[i]=="+")
            {
                int x = v[n-1] + v[n-2];
                v.push_back(x);
            }
           else if(ops[i]=="C")
           {
              v.pop_back();
           }
          else if(ops[i]=="D")
          {
              int x = 2 * v[n-1];
              v.push_back(x);
          }
          else
          {
              
             
              int x = stoi(ops[i]); 
              v.push_back(x);
          }
        }
        int sum=0;
         for(int i=0; i<v.size(); i++)
            sum+=v[i];
        return sum;
    }
};