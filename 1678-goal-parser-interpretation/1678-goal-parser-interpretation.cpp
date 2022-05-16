class Solution {
public:
    string interpret(string command) {
        string s;
        int i =0;
        while(i<command.size())
        {
            if(command[i] == '(' && command[i+1] == ')')
            {
                s.push_back('o');
                i++;
                i++;
            }
            if(command[i] == 'G')
            {
                s.push_back('G');
                i++;
            }
            if(command[i] == '(' && command[i+1]=='a')
            {
                s.push_back('a');
                s.push_back('l');
                i++; i++; i++; i++;
            }
        }
        return s;
    }
};