class Solution {
public:
      vector<vector<string>> findDuplicate(vector<string>& paths) {
        unordered_map<string,unordered_map<string,vector<string>>> map;
        for(int i=0;i<paths.size();i++)
        {
            string directory="";
            int j=0;
            for(j=0;j<paths[i].size();j++)
            {
                if(paths[i][j]==' ')
                    break;
                else
                    directory+=paths[i][j];
            }
            for(int k=j+1;k<paths[i].size();k++)
            {
                string file_name="",comp="";
                while(paths[i][k]!='(')
                {
                    file_name+=paths[i][k++];
                }
                while(paths[i][k]!=')')
                {
                    comp+=paths[i][k++];
                }
                k++;
                map[comp][file_name].push_back(directory);
            }
        }
        vector<vector<string>> ans;
        for(auto i : map)
        {
            if(i.second.size()<=1)
                continue;
            vector<string> str;
            for(auto j:i.second)
            {
                for(auto k:j.second)
                {
                    str.push_back(k+"/"+j.first);
                }
                
            }
            ans.push_back(str);
        }
        return ans;
        
    }
};