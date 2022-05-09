class Solution {
public:
      string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0")
            return "0";
        int n = num1.length();
        int m = num2.length();
        vector<int> ans(m + n,0);
        
        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=0;j--)
            {
                int m = (num2[j]-'0')*(num1[i]-'0');
                ans[i+j+1] += m;
                
                ans[i+j] += ans[i+j+1] / 10;
                ans[i+j+1] = ans[i+j+1] % 10;
                
            }
        }
        int i = 0;
        while(i< ans.size() && ans[i] == 0)
            i++;
        string res;
        while(i < ans.size())
        {
            res.push_back(ans[i]+'0');
            i++;
        }
        return res;
    }
};