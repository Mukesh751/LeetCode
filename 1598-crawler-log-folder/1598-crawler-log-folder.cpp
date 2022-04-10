class Solution {
public:
    int minOperations(vector<string>& logs) {
        // vector<string> v;
        // for(string x : logs)
        //     if(x[0] != '.')
        //         v.push_back(x);
        int pos = 0;
        for(string x : logs)
        {
            if(x == "../" && pos>0)
              pos-=1;
            else if(x == "../" && pos==0)
                 continue;
            else if(x == "./")
                continue;
            else
                pos++;
        }
        //cout<<pos;
        return pos;
    }
};