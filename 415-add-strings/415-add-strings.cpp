class Solution {
public:
    string addStrings(string num1, string num2) {
      reverse(num1.begin(),num1.end());
      reverse(num2.begin(),num2.end());
      int n1 = num1.size();
      int n2 = num2.size();
      if(n1>n2)
      {
          while(n1>n2)
          {
              num2.push_back('0');
              n2++;
          }
      }
         if(n1<n2)
      {
          while(n1<n2)
          {
              num1.push_back('0');
              n1++;
          }
      }
        cout<<num1<<" "<<num2;
        
        string ans = "";
        int carry = 0;
        
        for(int i=0; i<n1; i++)
        {
            int k = num1[i]-'0' + num2[i]-'0' + carry;
            if(k>9)
            {
                k-=10;
                carry = 1;
            }
            else
            {
                carry = 0;
            }
            ans.push_back(k+'0');
        }
        if(carry>0)
            ans.push_back(carry+'0');
        reverse(ans.begin(),ans.end());
      return ans;
    }
};