class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> string;
        for(int i=1; i<=n; i++)
        {
            if(i%3==0 && i%5==0)
                string.push_back("FizzBuzz");
            else if(i%3==0)
                string.push_back("Fizz");
            else if(i%5==0)
                string.push_back("Buzz");
            else
                string.push_back(to_string(i));
            
        }
        return string;
    }
};