class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int n=0;
        int count=0;
        int spaces=1;
        for(int i=0; i<text.size(); i++)
            if(text[i]==' ')
                spaces++;
        
        string word;
        stringstream s(text);
        for(int i=0; i<spaces; i++)
        {
            s>>word;
            count++;
            for(int j=0; j<brokenLetters.size(); j++)
            {  for(int k=0; k<word.size(); k++)
                    if(word[k]==brokenLetters[j])
                    {
                       n++; j=brokenLetters.size();k=word.size();break;
                    }
            }
        }
        return count-n;
    }
};