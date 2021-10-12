class Solution {
public:
    int maxPower(string s) {
        int count = 1;
        int max=1;
        for(int i=0; i<s.size(); i++)
        {   if(s[i] == s[i+1])
            {    
                count=0;
                char ch=s[i];
                while(s[i]==ch)
                {
                    count++;
                    i++;
                }
                i--;
                if(count>max)
                    max=count;
            } 
        }
        return max;
    }
};