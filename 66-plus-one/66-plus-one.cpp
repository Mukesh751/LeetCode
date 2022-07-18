class Solution {
public:
    vector<int> plusOne(vector<int>& digit, int idx = 0, int carry = 0) {
        
        if(idx == digit.size()){
            reverse(digit.begin(),digit.end());
            digit.push_back(carry);
            reverse(digit.begin(),digit.end());
            return digit;
        }
        
        if(digit[digit.size() - 1 - idx] != 9){
            digit[digit.size()-1-idx]++;
            return digit;
        }
        digit[digit.size()-1-idx] = 0;
        return plusOne(digit,idx + 1,1);
    }
};