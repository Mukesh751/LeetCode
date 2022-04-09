class Solution {
public:
    bool isPathCrossing(string path) {
        
          set<pair<int,int>>s;
        pair<int,int>a ={0,0};
        s.insert({0,0});
        
             
      for(int i=0; i<path.size(); i++)
        {
            switch(path[i])
            {
                case 'N' : a.second++; break;
                case 'S' : a.second--; break;
                case 'E' : a.first++; break;
                case 'W' : a.first--; break;
            }
      
          if(s.find(a)==s.end())
                s.insert(a);
           else
                return true;      
        }
        return false;
    }
};