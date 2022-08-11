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
    vector<int> addToArrayForm(vector<int>& num, int k) {
        string s = "";
        
        for(auto x : num)
           s.push_back(x + '0');
        
        string t = "";
        while(k>0){
            t.push_back(k%10 + '0');
            k = k/10;
        }
        reverse(t.begin(),t.end());
        
        string n = addStrings(s,t);
        
        vector<int> ans;
        int i = 0;
        while(i<n.size()){
            ans.push_back(n[i] - '0');
            i++;
        }
     //   reverse(ans.begin(),ans.end());
        return ans;
    }
};